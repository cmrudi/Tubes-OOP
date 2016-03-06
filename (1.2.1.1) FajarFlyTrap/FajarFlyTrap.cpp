#include <iostream>
#include <windows.h>
#include "FajarFlyTrap.h"

using namespace std;

//constructor
FajarFlyTrap::FajarFlyTrap(int usia, int ex, int x, int y, char shape) {
    umur = usia;
    exp = ex;
    posisiX = x;
    posisiY = y;
    bentuk = shape;
}

//Method
void FajarFlyTrap::muncul() {
    cout << "sudah diimplentasikan di kelas makhluk" << endl;
}

void FajarFlyTrap::makan() {
    cout << "Implementasi makan kelas ini sudah diimplementasikan di kelas predator" << endl;
}

void FajarFlyTrap::regenerasi_shield() {
    if (!shield) {
        cout << "shield off :(" << endl;
        Sleep(10000);   //recharge for 10s
        shield = true;  //reset shield
        cout << "shield on :)" << endl;
    } else {    //shield on
        //do nothing
        cout << "shield already on (y)" << endl;
    }
}
void FajarFlyTrap::show_data () {
    cout << "Usia   : " << umur << endl;
    cout << "Exp    : " << exp << endl;
    cout << "Pos X  : " << posisiX << endl;
    cout << "Pos Y  : " << posisiY << endl;
    cout << "Shape  : " << bentuk << endl;
}
