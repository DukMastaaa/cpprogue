#include "player.h"

Player::Player(int xmax_, int ymax_) {
    xpos = 0;
    ypos = 0;
    xmax = xmax_;
    ymax = ymax_;
}

Player::Player(int xInit, int yInit, int xmax_, int ymax_) {
    xpos = xInit;
    ypos = yInit;
    xmax = xmax_;
    ymax = ymax_;
}

int Player::getX() {
    return xpos;
}

int Player::getY() {
    return ypos;
}

void Player::setXMax(int xmax_) {
    xmax = xmax_;
}

void Player::setYMax(int ymax_) {
    ymax = ymax_;
}

void Player::move(char wasd) {
    if (wasd == 'w' && ypos > 0) {
        ypos--;
    } else if (wasd == 'a' && xpos > 0) {
        xpos--;
    } else if (wasd == 's' && ypos < ymax - 1) {
        ypos++;
    } else if (wasd == 'd' && xpos < xmax - 1) {
        xpos++;   
    }
}