#include <iostream>
//#include "mahkluk.h"
#include "tumbuhan.h"

using namespace std;

//constructor
tumbuhan::tumbuhan(){
    cout << "tumbuhan created" << endl;
}

//Method

void tumbuhan::makan() {
    cout << "tumbuhan makan" << endl;
}
void tumbuhan::muncul() {
    cout << "tumbuhan muncul" << endl;
}
void tumbuhan::regenerasi_shield() {
    shield = true;
    cout << "regenerasi sukses" << endl;
}
