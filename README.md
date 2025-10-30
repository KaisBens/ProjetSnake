<div id="top">

<!-- HEADER STYLE: CLASSIC -->

<div align="center">

# PROJETSNAKE

<em>A simple Snake game built in C</em>

<!-- BADGES -->

<img src="https://img.shields.io/badge/C-A8B9CC.svg?style=default&logo=C&logoColor=black" alt="C">

</div>
<br>

---

## Table of Contents

* [Overview](#overview)
* [Features](#features)
* [Project Structure](#project-structure)
* [Getting Started](#getting-started)
* [Roadmap](#roadmap)
* [Contributing](#contributing)
* [License](#license)
* [Acknowledgments](#acknowledgments)

---

## Overview

ProjetSnake is a classic Snake game implemented in C. It features simple graphics, collision detection, and a scoring system. The project is self-contained and uses the standard C library for functionality.

---

## Features

| Component         | Details                                                                                                                      |
| :---------------- | :--------------------------------------------------------------------------------------------------------------------------- |
| **Architecture**  | Simple single-process game loop with procedural or object-oriented C code handling input, game state updates, and rendering. |
| **Code Quality**  | Structured code with comments in source files.                                                                               |
| **Documentation** | Minimal, mostly code comments.                                                                                               |
| **Integrations**  | No external integrations; interacts with OS for input/output.                                                                |
| **Modularity**    | Header files separate modules like collisions, menu, walls, apples, and snake logic.                                         |
| **Testing**       | Manual testing via gameplay.                                                                                                 |
| **Performance**   | Optimized for smooth gameplay using efficient C logic.                                                                       |
| **Security**      | No special security considerations.                                                                                          |
| **Dependencies**  | C standard library; Makefile for build management.                                                                           |
| **Scalability**   | Designed for a single-player game.                                                                                           |

---

## Project Structure

```sh
ProjetSnake/
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

---

## Getting Started

### Prerequisites

* **Programming Language:** C

### Installation

1. **Clone the repository:**

   ```sh
   git clone ../ProjetSnake
   ```

2. **Navigate to the project directory:**

   ```sh
   cd ProjetSnake
   ```

3. **Build the project:**

   ```sh
   make
   ```

### Usage

Run the game with:

```sh
./snake
```

### Testing

Manual testing via gameplay. No automated test framework is included.

---

## Contributing

* Fork the repository
* Clone locally
* Create a new branch
* Make changes and commit
* Push to your fork
* Open a pull request

---

## License

ProjetSnake is protected under the [MIT License](https://choosealicense.com/licenses/mit/).

---

## Acknowledgments

* Credit contributors, inspiration, and references

<div align="right">
[![][back-to-top]](#top)
</div>

[back-to-top]: https://img.shields.io/badge/-BACK_TO_TOP-151515?style=flat-square
