#include "grid.h"
#include "tile.h"
#include "tiletypes.h"
#include <vector>

Grid::Grid(int width_, int height_) {
    width = width_;
    height = height_;
    grid = std::vector<std::vector<Tile>>(height, std::vector<Tile>(width, Grass()));
    (grid.at(0)).at(0) = BrickWall();
}

std::vector<std::vector<Tile>> Grid::getGrid() {
    return grid;
}

int Grid::getWidth() {
    return width;
}

int Grid::getHeight() {
    return height;
}

Tile Grid::at(int row, int col) {
    return grid[row][col];
}