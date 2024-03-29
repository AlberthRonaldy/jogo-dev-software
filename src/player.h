#ifndef player

#include "lib.h"

class Player {
  public:
    Player(WINDOW * win, int y, int x, char c);
    void mvup();
    void mvdown();
    void mvleft();
    void mvright();
    int getmv();
    void display();
  private:
    int xLoc, yLoc, xMax, yMax;
    char character;
    WINDOW * game_win;
};

#endif