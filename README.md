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
* [Project Index](#project-index)
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

## Project Index

<details open>
	<summary><b><code>PROJETSNAKE/</code></b></summary>
	<details>
		<summary><b>__root__</b></summary>
		<blockquote>
			<table>
				<thead>
					<tr>
						<th>File Name</th>
						<th>Summary</th>
					</tr>
				</thead>
				<tbody>
					<tr><td><b>collisions.c</b></td><td>Handles collision detection between objects and screen boundaries to maintain game integrity.</td></tr>
					<tr><td><b>collisions.h</b></td><td>Declares wall collision detection functions ensuring objects remain within game limits.</td></tr>
					<tr><td><b>main.c</b></td><td>Core game loop: initializes graphics, handles gameplay logic, updates score and time, and terminates the program.</td></tr>
					<tr><td><b>Makefile</b></td><td>Builds the executable and manages compilation of all modules, dependencies, and cleanup.</td></tr>
					<tr><td><b>menu.c</b></td><td>Displays the game menu and manages user interactions with options like “Play” and “Quit”.</td></tr>
					<tr><td><b>menu.h</b></td><td>Declares menu-related functions, including <code>AfficherMenu</code> for displaying and handling menu options.</td></tr>
					<tr><td><b>mur.c</b></td><td>Creates and renders wall segments; checks collisions between the snake and walls.</td></tr>
					<tr><td><b>mur.h</b></td><td>Declares wall-related functions for collision detection and wall management.</td></tr>
					<tr><td><b>pommes.c</b></td><td>Generates apple positions, handles collisions with the snake, and respawns apples when eaten.</td></tr>
					<tr><td><b>pommes.h</b></td><td>Declares functions for apple management, positioning, and collision detection.</td></tr>
					<tr><td><b>serpent.c</b></td><td>Implements snake initialization, movement, input handling, and rendering.</td></tr>
					<tr><td><b>serpent.h</b></td><td>Declares functions and structures for snake state and movement logic.</td></tr>
					<tr><td><b>time_score.c</b></td><td>Tracks and displays elapsed time and current score during gameplay.</td></tr>
					<tr><td><b>time_score.h</b></td><td>Declares timing and scoring functions used across the game.</td></tr>
				</tbody>
			</table>
		</blockquote>
	</details>
</details>

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

* Credit contributors, inspiration, and references.
