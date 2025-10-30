<div id="top">

<!-- EN-TÊTE -->

# PROJETSNAKE

<em>Un jeu Snake classique développé en C.</em>

<img src="https://img.shields.io/badge/C-A8B9CC.svg?style=default&logo=C&logoColor=black" alt="C">

</div>
<br>

---

## Table des matières

- [Aperçu](#aperçu)
- [Fonctionnalités](#fonctionnalités)
- [Structure du projet](#structure-du-projet)
    - [Index du projet](#index-du-projet)
- [Démarrage](#démarrage)
    - [Prérequis](#prérequis)
    - [Installation](#installation)
    - [Utilisation](#utilisation)
    - [Tests](#tests)
- [Feuille de route](#feuille-de-route)
- [Contribution](#contribution)
- [Licence](#licence)
- [Remerciements](#remerciements)

---

## Aperçu

**ProjetSnake** est une implémentation du célèbre jeu *Snake* en langage **C**.  
Le joueur contrôle un serpent qui grandit à chaque pomme mangée, tout en évitant de heurter les murs ou son propre corps.  
Le projet a été développé pour illustrer la logique de base d’un jeu en 2D, la gestion des collisions, et la manipulation de graphismes simples.

---

## Fonctionnalités

|      | Composant         | Description                                                                 |
| :--- | :---------------- | :-------------------------------------------------------------------------- |
| ⚙️  | **Architecture**   | Boucle de jeu simple avec gestion des entrées, des collisions et du rendu graphique. |
| 🔩 | **Qualité du code** | Code modulaire et lisible, découpé en plusieurs fichiers `.c` et `.h`. |
| 📄 | **Documentation**   | Le code est commenté et structuré pour faciliter la lecture. |
| 🔌 | **Intégrations**    | Aucune dépendance externe ; le projet est entièrement autonome. |
| 🧩 | **Modularité**      | Modules séparés : serpent, pommes, murs, menu, temps et score. |
| 🧪 | **Tests**           | Tests manuels via l’exécution du jeu. |
| ⚡️  | **Performance**     | Jeu fluide grâce à l’utilisation du langage C et à une gestion efficace de la mémoire. |
| 🛡️ | **Sécurité**        | Pas de risques de sécurité notables ; application locale et autonome. |
| 📦 | **Dépendances**     | Basé sur la bibliothèque standard C et un Makefile. |
| 🚀 | **Évolutivité**     | Conçu pour une seule instance de jeu, mais facilement extensible. |

---

## Structure du projet

```sh
└── ProjetSnake/
    ├── collisions.c
    ├── collisions.h
    ├── IMG/
    │   ├── background.png
    │   ├── face_D.png
    │   ├── face_L.png
    │   ├── face_R.png
    │   ├── face_UP.png
    │   ├── fond.png
    │   ├── mur.png
    │   ├── pomme.png
    │   └── serpent.png
    ├── main.c
    ├── Makefile
    ├── menu.c
    ├── menu.h
    ├── mur.c
    ├── mur.h
    ├── pommes.c
    ├── pommes.h
    ├── README.md
    ├── serpent.c
    ├── serpent.h
    ├── time_score.c
    └── time_score.h
```

### Index du projet

Chaque fichier `.c` implémente un module spécifique du jeu :
- **main.c** — boucle principale du jeu (initialisation, logique et rendu).
- **menu.c / menu.h** — affichage et interaction du menu principal.
- **serpent.c / serpent.h** — logique du serpent : mouvement, collisions, affichage.
- **pommes.c / pommes.h** — génération et gestion des pommes.
- **mur.c / mur.h** — génération et détection des collisions avec les murs.
- **time_score.c / time_score.h** — gestion du score et du chronomètre.
- **collisions.c / collisions.h** — fonctions générales de détection de collisions.

---

## Démarrage

### Prérequis

- **Langage requis :** C  
- **Outils :** GCC (ou tout autre compilateur C compatible)  
- **Système :** Linux, macOS ou Windows avec un terminal compatible Makefile  

---

### Installation

1. **Cloner le dépôt :**
   ```sh
   git clone ./ProjetSnake
   cd ProjetSnake
   ```

2. **Compiler le projet :**
   ```sh
   make
   ```

3. **Nettoyer les fichiers objets (optionnel) :**
   ```sh
   make clean
   ```

---

### Utilisation

Lancer le jeu :
```sh
./snake
```

Utilisez les **flèches directionnelles** pour contrôler le serpent.  
Le jeu se termine lorsque le serpent touche un mur ou lui-même.

---

### Tests

Les tests sont effectués manuellement en exécutant le jeu et en vérifiant le comportement attendu :
- Mouvements corrects du serpent  
- Détection des collisions avec les murs et les pommes  
- Mise à jour du score et du temps  

---

## Feuille de route

- [x] Création de la boucle principale du jeu  
- [x] Gestion du menu et de l’affichage  
- [x] Gestion du score et du temps  
- [ ] Ajouter un mode multijoueur  
- [ ] Ajouter des niveaux de difficulté  
- [ ] Intégrer des sons et musiques  

---

## Contribution

Les contributions sont les bienvenues !

1. **Forkez** le dépôt  
2. **Clonez** votre fork localement  
3. **Créez une branche** pour votre nouvelle fonctionnalité  
4. **Apportez vos modifications** et testez-les  
5. **Soumettez une pull request**

---

## Licence

ProjetSnake est distribué sous licence **MIT**.  
Consultez le fichier [LICENSE](https://choosealicense.com/licenses/mit/) pour plus de détails.

---

## Remerciements

- Inspiré par le jeu classique *Snake*  
- Merci aux contributeurs et testeurs du projet  
- Images et éléments graphiques libres de droit

<div align="right">

[![][back-to-top]](#top)

</div>

[back-to-top]: https://img.shields.io/badge/-RETOUR_EN_HAUT-151515?style=flat-square
