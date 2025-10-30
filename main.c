#include <stdio.h>
#include <stdlib.h>
#include <graph.h>
#include "collisions.h"
#include "serpent.h"
#include "pommes.h"
#include "time_score.h"
#include "menu.h"
#include "mur.h"
int main(){
    char temps[6];
    int murx[25], mury[25];
	couleur black = CouleurParComposante(0,0,0);
	couleur green = CouleurParComposante(163, 183, 99);
	couleur yellow = CouleurParComposante(255,255,204);
    couleur red = CouleurParComposante(240,15,15);
    int segmentsX[SEGMENTSMAX];
    int segmentsY[SEGMENTSMAX];
    int NOMBRE_SEGMENTS;
    char direction = 'r';
    int verifcollision = 0;
    int pomme_x[6], pomme_y[6];
    int tvb = 3;
    int minute = 0;
    int seconde = 0; 
    int ancienne_seconde = 0;
    int seconde_actuel = 0;
InitialiserGraphique();
    CreerFenetre(100, 100, 1240, 900);
    ChoisirTitreFenetre("Snake");
    EffacerEcran(black);

    while (tvb == 3) {
        tvb = AfficherMenu(); 
        if (tvb == 0) {
            ChargerImage("IMG/background.png", 20, 20,0,0, 1200, 800);
            InitialiserTailleSerpent(segmentsX, segmentsY, &NOMBRE_SEGMENTS);
            Pomme(pomme_x, pomme_y, segmentsX, segmentsY, NOMBRE_SEGMENTS);
            mur(murx, mury, segmentsX, segmentsY, NOMBRE_SEGMENTS);
        }
    }
    while(tvb == 0 && verifcollision != 2){
        verifcollision = Deplacement(segmentsX, segmentsY, NOMBRE_SEGMENTS, direction);
        Serpent(segmentsX,segmentsY,NOMBRE_SEGMENTS, direction);
        Keys(&direction);
        Score(NOMBRE_SEGMENTS);
        Timer(temps,&minute, &seconde, &ancienne_seconde, &seconde_actuel);
        if (Collisions_Murs(murx, mury, segmentsX, segmentsY, NOMBRE_SEGMENTS) == 2){
            verifcollision = 2;
        }
        if (Collisions_Pommes(pomme_x, pomme_y, segmentsX, segmentsY) == 4 ){
            NOMBRE_SEGMENTS ++;
        }
    }
    FermerGraphique();
    return EXIT_SUCCESS;
}