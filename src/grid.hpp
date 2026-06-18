#pragma once
#include <vector>
class Grid
{
private:
    int rows, cols, cellSize;
    std::vector<std::vector<int>> cells;

public:
    Grid(int width, int height, int cellSize) : rows(height / cellSize), cols(width / cellSize),
                                                cellSize(cellSize), cells(rows, std::vector<int>(cols, 0)) {};
    void Draw();
    void setValue(int row, int col, int val);
    bool isWithinBounds(int row, int col);
    int getValue(int row, int col);
    int getRows() { return rows; }
    int getCols() { return cols; }
    void fillRandomCells();
    void clear();
};