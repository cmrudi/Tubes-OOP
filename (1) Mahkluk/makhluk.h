

#ifndef MAKHLUK_H
#define MAKHLUK_H


class Makhluk{
	//This is Abstract Class
	//The Highest level of abstract class
	public:
		//Constructor
		Makhluk();
		//Destructor
		~Makhluk();
		//Method
		virtual void muncul();
		virtual void makan();
	protected:
		int umur;
		int exp;
		int posisiX;
		int posisiY;
		char bentuk;
	private:
		static int jumlah; //Jumlah Mahkluk 
};

#endif
