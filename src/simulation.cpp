#include "simulation.hpp"
#include <vector>
#include <utility>
void Simulation::setCellValue(int row, int col, int val)
{
    grid.setValue(row, col, val);
}

void Simulation::Draw()
{
    grid.Draw();
}

int Simulation::countLiveNeighbours(int row, int col)
{
    int liveNeighbours = 0;
    // above,below,left,right,upper diagonal left,upper diagonal right, lower diagonal left, lower diaonal right
    std::vector<std::pair<int, int>> nOffsets = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    for (const auto &offset : nOffsets)
    {
        int neighbourRow = (row + offset.first + grid.getRows()) % grid.getRows();
        int neighbourCol = (col + offset.second + grid.getCols()) % grid.getCols();
        liveNeighbours += grid.getValue(neighbourRow, neighbourCol);
    }
    return liveNeighbours;
}
