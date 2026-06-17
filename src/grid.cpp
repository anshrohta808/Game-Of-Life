#include "grid.hpp"
#include <raylib.h>
#include <vector>
void grid::Draw()
{
    for (int row = 0; row < rows; row++)
        for (int col = 0; col < cols; col++)
        {
            Color color = cells[row][col] ? Color{140, 150, 120, 255} : Color{255, 120, 150, 204};
            DrawRectangle(col * cellSize, row * cellSize, cellSize - 2, cellSize - 2, color);
        }
}

void grid::setValue(int row, int col, int val)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols)
        cells[row][col] = val;
}
