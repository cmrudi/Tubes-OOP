#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <cstdlib>
#include "mahkluk.h"

class Board
{
public:
    static Board* Instance();
    void TampilkanBoard();
    void MasukkanMahkluk(const Mahkluk& Mh);

private:
    Board();
    Mahkluk* kotak[20][40];
    static Board* Addr;
};

#endif // BOARD_H
