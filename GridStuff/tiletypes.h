#ifndef TILETYPES_H
#define TILETYPES_H

#include "tile.h"

// Floor Tiles
class FloorTile : public Tile {
    public:
        FloorTile();
};

class Grass : public FloorTile {
    public:
        Grass();
};

// Wall Tiles
class WallTile : public Tile {
    public:
        WallTile();
};

class BrickWall : public WallTile {
    public:
        BrickWall();
};

#endif