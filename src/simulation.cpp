#include "simulation.hpp"

void Simulation::setCellValue(int row, int col, int val)
{
    grid.setValue(row, col, val);
}

void Simulation::Draw()
{
    grid.Draw();
}
