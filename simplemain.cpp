#include <ncurses.h>
#include "GridStuff/grid.h"
#include "PlayerStuff/player.h"
#include "GridStuff/tile.h"
#include "colourconst.h"

void displayGrid(WINDOW* gridWindow, Grid* grid, Player* player, WINDOW* debugWindow) {
    short thisColourPair;
    char thisTileChar;
    int width = grid->getWidth();
    int height = grid->getHeight();

    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            thisColourPair = (grid->at(row, col)).getColourPair();
            thisTileChar = (grid->at(row, col)).getTileChar();

            wattron(gridWindow, COLOR_PAIR(thisColourPair));
            mvwaddch(gridWindow, row, col, thisTileChar);
            wattroff(gridWindow, COLOR_PAIR(thisColourPair));
        }
    }

    mvwaddch(gridWindow, player->getY(), player->getX(), '@');
    wclear(debugWindow);
    wprintw(debugWindow, "y%d x%d", player->getY(), player->getX());
}

int main() {
    initscr();
    noecho();  // disable echoing
    cbreak(); 
    curs_set(0);  // hides cursor

    if (has_colors() == FALSE) {
        endwin();
        std::cout << "Your terminal does not support colour.\n";
        exit(1);
    }

    startColours();
    clear();

    int gridWidth = 10;
    int gridHeight = 8;
    WINDOW* gridWindow = newwin(gridHeight, gridWidth, 5, 5);
    WINDOW* debugWindow = newwin(1, 10, 1, 1);

    Grid grid = Grid(gridWidth, gridHeight);
    Player player = Player(gridWidth, gridHeight);

    char wasd;

    while (true) {
        displayGrid(gridWindow, &grid, &player, debugWindow);
        wrefresh(gridWindow);
        wrefresh(debugWindow);
        wasd = wgetch(gridWindow);

        if (wasd == 'q') {
            break;
        }
        player.move(wasd);
    }

    endwin();
    return 0;
}