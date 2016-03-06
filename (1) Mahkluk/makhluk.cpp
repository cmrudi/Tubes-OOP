#include "makhluk.h"
#include <iostream>
using namespace std;

Makhluk::Makhluk() {
	//Mahkluk Constructor
	jumlah++;
	
}

Makhluk::~Makhluk() {
	//destruktor makhluk;
	jumlah--;
}

int Makhluk::jumlah = 0;
//Inisialisasi static data member dari kelas 
