#ifndef DINOSAURUS_H
#define DINOSAURUS_H
#include "makhluk.h"

class Dinosaurus : public Makhluk {
	public:
	//Method
	virtual void gerak();
	virtual void makan();
	
	protected:
	int waktuGerak;
	int dx;
	int dy;
	
};
#endif
