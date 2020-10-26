#include "gamemodel.h"
#include "GridStuff/grid.h"
#include "PlayerStuff/player.h"

GameModel::GameModel(int gridWidth, int gridHeight) {
    grid = Grid(gridWidth, gridHeight);
    player = Player();
}

GameModel::GameModel(int gridWidth, int gridHeight, int playerInitX, int playerInitY) {
    grid = Grid(gridWidth, gridHeight);
    player = Player(playerInitX, playerInitY);
}

Grid* GameModel::getGrid() {
    return &grid;
}

Player* GameModel::getPlayer() {
    return &player;
}

void GameModel::movePlayer(char wasd) {
    int xMax = grid.getWidth();
    int yMax = grid.getHeight();
    int x = player.getX();
    int y = player.getY();
    int newY, newX;

    // Simplify by making C array with wasd and determining values from indexes?
    switch (wasd) {
        case 'w':
            newX = x;
            newY = y - 1;
            break;
        case 'a':
            newX = x - 1;
            newY = y;
            break;
        case 's':
            newX = x;
            newY = y + 1;
            break;
        case 'd':
            newX = x + 1;
            newY = y;
            break;
    }

    if (0 <= newX && newX < xMax && 0 <= newY && newY < yMax && 
            !(grid.at(newY, newX)).isCollidable()) { 
        player.move(wasd);
    }
}
