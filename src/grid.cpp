#include "grid.hpp"
#include <raylib.h>
#include <vector>
void Grid::Draw()
{
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
        {
            Color color = cells[row][col] ? Color{140, 150, 120, 255} : Color{255, 120, 150, 204};
            DrawRectangle(col * cellSize, row * cellSize, cellSize - 1, cellSize - 1, color);
        }
}

void Grid::setValue(int row, int col, int val)
{
    if (isWithinBounds(row, col))
        cells[row][col] = val;
}

bool Grid::isWithinBounds(int row, int col)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols)
    {
        return true;
    }
    return false;
}

int Grid::getValue(int row, int col)
{
    if (isWithinBounds(row, col))
    {
        return cells[row][col];
    }
    return 0;
}
