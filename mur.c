

void mur(int *murx, int *mury, int *segmentsX, int *segmentsY, int NOMBRE_SEGMENTS){
    srand((Microsecondes())/1000000);
    int i;
    for(i = 0; i < 25; i++)
    {
        murx[i] = ((rand() % (58) + 1) * 20);
        mury[i] = ((rand() % (38) + 1) * 20);
        ChargerImage("IMG/mur.png", murx[i],mury[i], 0, 0, 20,20);
    }
    for(i=1;i<NOMBRE_SEGMENTS;i++){
			if(&murx[i]==&segmentsX[i] && mury[i]==segmentsY[i]){
			    murx[i] = ((rand() % (58)+1)*20);
				mury[i] = ((rand() % (38)+1)*20);
				i = -1;
			}
}
}

int Collisions_Murs(int *murx, int *mury, int *segmentsX, int *segmentsY, int NOMBRE_SEGMENTS){
    int i;
    for(i = 0; i < 25; i++){
        if((murx[i] == segmentsX[0]) && (mury[i] == segmentsY[0])){
            return 2;

        }
    }
}