#include "colourconst.h"
#include <ncurses.h>

void startColours() {
    // surely there has to be a better way to do this.
    start_color();
    init_pair(WHITE_ON_BLACK, COLOR_WHITE, COLOR_BLACK);
    init_pair(BLACK_ON_WHITE, COLOR_BLACK, COLOR_WHITE);
    init_pair(GREEN_ON_BLACK, COLOR_GREEN, COLOR_BLACK);
    init_pair(BLUE_ON_BLACK, COLOR_BLUE, COLOR_BLACK);
    init_pair(RED_ON_BLACK, COLOR_RED, COLOR_BLACK);
    init_pair(CYAN_ON_BLACK, COLOR_CYAN, COLOR_BLACK);
    init_pair(YELLOW_ON_BLACK, COLOR_YELLOW, COLOR_BLACK);
    init_pair(CYAN_ON_BLUE, COLOR_CYAN, COLOR_BLUE);
    init_pair(YELLOW_ON_GREEN, COLOR_YELLOW, COLOR_GREEN);
}