#include "tiletypes.h"

FloorTile::FloorTile() {
    collidable = false;
}

Grass::Grass() {
    type = "grass";
    tileChar = '~';
    colourPair = GREEN_ON_BLACK;
}

WallTile::WallTile() {
    collidable = true;
}

BrickWall::BrickWall() {
    type = "brickWall";
    tileChar = '#';
    colourPair = WHITE_ON_BLACK;
}