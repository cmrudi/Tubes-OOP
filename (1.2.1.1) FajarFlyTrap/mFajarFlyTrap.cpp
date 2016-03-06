#include <iostream>
#include "FajarFlyTrap.h"

using namespace std;

int main () {
    FajarFlyTrap fajar(21, 100, 0, 0, 'F');

    fajar.show_data();

    fajar.makan();
    fajar.muncul();
    fajar.regenerasi_shield();

    return 0;
}
