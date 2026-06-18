#pragma once
#include "grid.hpp"

class Simulation
{
private:
    Grid grid;
    Grid tempGrid;

public:
    Simulation(int width, int height, int cellSize) : grid(width, height, cellSize), tempGrid(width, height, cellSize)
    {
        grid.fillRandomCells();
    };
    void setCellValue(int row, int col, int val);
    void Draw();
    int countLiveNeighbours(int row, int col);
    void update();
};