#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <iostream>

class Player {
    private:
        int xpos;
        int ypos;

    public:
        Player();
        Player(int xInit, int yInit);
        int getX();
        int getY();
        void tp(int y, int x);
        void move(char wasd);
};

#endif