#ifndef TUMBUHAN_H_
#define TUMBUHAN_H_

#include "mahkluk.h"

class tumbuhan : public Mahkluk
{
	//This is Abstract Class
	//The 2nd level of abstract class
	public:
        //constructor
		tumbuhan();

		//Method
		virtual void makan();
		virtual void muncul();
		virtual void regenerasi_shield();

	private:
		bool shield;
		double waktu_regenerasi;
};

#endif
