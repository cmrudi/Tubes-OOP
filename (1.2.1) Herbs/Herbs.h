#ifndef HERBS_H_
#define HERBS_H_
//aaaknxnsiiwd
#include "tumbuhan.h"

class Herbs : public tumbuhan {
	//This is Abstract Class
	//The 3rd level of abstract class
	public:
        //4 sekawan
		Herbs();

		//Method
        virtual void muncul();
		virtual void regenerasi_shield();
};

#endif
