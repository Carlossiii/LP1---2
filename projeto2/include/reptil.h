#ifndef REPTIL_H
#define REPTIL_H

#include <iostream>
//#include <string>
#include "animal.h"

using namespace std;

class Reptil: public Animal{
	protected:
		bool venenoso;
		string tipo_veneno;

	public:
		Reptil();
		Reptil(bool Ven, string Tipo);
		~Reptil();

		bool getVenenoso();
		void setVenenoso(bool Ven);

		string getTipo_veneno();
		void setTipo_veneno(string Tipo);
};

#endif