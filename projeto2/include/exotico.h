#ifndef EXOTICO_H
#define EXOTICO_H

#include <iostream>
#include <string>
#include "animalsilvestre.h"

class Exotico: public AnimalSilvestre{
	protected:
		string pais_origem;
		
	public:
		Exotico();
		Exotico(string Pais);
		~Exotico();

		string getPais_origem();
		void setPais_origem(string Pais);
};

#endif