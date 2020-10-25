#include <vector>
#include <iostream>

class Player {
    private:
        int xpos;
        int ypos;
        int xmax;
        int ymax;

    public:
        Player(int xmax_, int ymax_);
        Player(int xInit, int yInit, int xmax_, int ymax_);
        int getX();
        int getY();
        void setXMax(int xmax_);
        void setYMax(int ymax_);
        void move(char wasd);
};