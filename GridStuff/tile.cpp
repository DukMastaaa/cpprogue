#include "tile.h"
#include <iostream>

Tile::Tile() {}

char Tile::getTileChar() {
    return tileChar;
}

std::string Tile::getType() {
    return type;
}

bool Tile::isCollidable() {
    return collidable;
}

short Tile::getColourPair() {
    return colourPair;
}