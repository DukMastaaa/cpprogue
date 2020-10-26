#ifndef GRID_H
#define GRID_H

#include <vector>
#include "tile.h"

class Grid {
    private:
        int width;
        int height;
        std::vector<std::vector<Tile>> grid;

    public:
        Grid(int width = 1, int height = 1);
        std::vector<std::vector<Tile>> getGrid();
        int getWidth();
        int getHeight();
        Tile at(int row, int col);
};

#endif