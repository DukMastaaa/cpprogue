#include "player.h"

Player::Player() {
    xpos = 0;
    ypos = 0;
}

Player::Player(int xInit, int yInit) {
    xpos = xInit;
    ypos = yInit;
}

int Player::getX() {
    return xpos;
}

int Player::getY() {
    return ypos;
}

void Player::move(char wasd) {
    switch (wasd) {
        case 'w': 
            ypos--;
            break;
        case 'a':
            xpos--;
            break;
        case 's':
            ypos++;
            break;
        case 'd':
            xpos++;
            break;
    }
}

void Player::tp(int y, int x) {
    xpos = x;
    ypos = y;
}