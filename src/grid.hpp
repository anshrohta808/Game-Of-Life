#pragma once
#include <vector>
class grid
{
private:
    int rows, cols, cellSize;
    std::vector<std::vector<int>> cells;

public:
    grid(int width, int height, int cellSize) : rows(height / cellSize), cols(width / cellSize),
                                                cellSize(cellSize), cells(rows, std::vector<int>(cols, 0)) {};
    void Draw();
    void setValue(int row, int col, int val);
};