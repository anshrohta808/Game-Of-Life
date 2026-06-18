#pragma once
#include "grid.hpp"

class Simulation
{
private:
    Grid grid;

public:
    Simulation(int width, int height, int cellSize) : grid(width, height, cellSize) {};
    void setCellValue(int row, int col, int val);
    void Draw();
};