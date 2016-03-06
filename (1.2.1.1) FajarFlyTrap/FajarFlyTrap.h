#ifndef FAJARFLYTRAP_H_
#define FAJARFLYTRAP_H_

#include "predator.h"

class FajarFlyTrap : public predator {
	//This is Abstract Class
	//The 3rd level of abstract class
	public:
        //4 sekawan
		FajarFlyTrap(int usia, int ex, int x, int y, char shape);

		//Method
        virtual void muncul();
        virtual void makan();
		virtual void regenerasi_shield();
		void show_data ();
};

#endif
