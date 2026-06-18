#pragma once
#include "grid.hpp"

class Simulation
{
private:
    Grid grid;
    Grid tempGrid;
    bool run;

public:
    Simulation(int width, int height, int cellSize) : grid(width, height, cellSize), tempGrid(width, height, cellSize), run(false)
    {
        grid.fillRandomCells();
    };
    void setCellValue(int row, int col, int val);
    void Draw();
    int countLiveNeighbours(int row, int col);
    void update();
    bool isRunning() { return run; }
    void Start()
    {
        run = true;
    }
    void Stop() { run = false; }
};