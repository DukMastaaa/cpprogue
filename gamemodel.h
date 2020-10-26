#ifndef GAMEMODEL_H
#define GAMEMODEL_H

#include "GridStuff/grid.h"
#include "PlayerStuff/player.h"

class GameModel {
    private:
        Grid grid;
        Player player;

    public:
        GameModel(int gridWidth, int gridHeight);
        GameModel(int gridWidth, int gridHeight, int playerInitX, int playerInitY);
        Grid* getGrid();
        Player* getPlayer();
        void movePlayer(char wasd);
};


#endif