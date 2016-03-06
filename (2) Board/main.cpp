#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <thread>
#include "board.h"

using namespace std;

void sleep(unsigned int msseconds){
    clock_t goal = msseconds+clock();
    while(goal>clock());
}

int main()
{
    Board* B;
    B=Board::Instance();
    while(1){
        B->TampilkanBoard();
        sleep(50000);
        system("clear");

    }
}
