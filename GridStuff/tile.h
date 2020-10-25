#ifndef TILE_H
#define TILE_H

#include <vector>
#include <iostream>
#include "../colourconst.h"

class Tile {
    protected:
        std::string type;
        bool collidable;
        char tileChar;
        short colourPair;

    public:
        Tile();
        char getTileChar();
        std::string getType();
        bool isCollidable();
        short getColourPair();
};

#endif