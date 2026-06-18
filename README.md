# Conway's Game of Life

This project is my Raylib implementation of Conway's Game of Life.

It is one of those ideas that stays interesting no matter how many times you watch it. The rules are tiny. A cell lives, dies, or is born based on its neighbors. That is it. But once the simulation starts, those simple rules create motion, collapse, repeating structures, and weird little patterns that look planned even though they are not. That contrast is what makes it so fascinating.

In this version, the simulation runs on a grid where each cell can be alive or dead. I also added a small set of controls so the board is not limited to random starts. You can pause the simulation, generate a random state, or build your own pattern by clicking directly on the grid.

## controls

- `Space` pauses the game.
- `Enter` starts or resumes the current configuration.
- `R` generates a random configuration.
- Left mouse button lets you click cells and create a custom configuration.
- `Backspace` clears the grid.

## how it works

Each frame, the program checks every cell and counts its eight neighbors. From there it applies Conway's rules to decide what the next generation should look like. Once the new state is ready, it replaces the old one and draws the updated grid to the screen.

## tech

- C++
- raylib

## build

This project uses the included `Makefile` and is set up for Raylib with `mingw32-make`.

## attribution

The `Makefile` used in this project came from the educ8s Raylib C++ starter template for VS Code:

https://github.com/educ8s/Raylib-CPP-Starter-Template-for-VSCODE-V2
