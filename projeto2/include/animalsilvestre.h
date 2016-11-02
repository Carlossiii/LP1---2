#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_H

#include <iostream>
#include <string>

class AnimalSilvestre{
	protected:
		string ibama;

	public:
		AnimalSilvestre();
		AnimalSilvestre(string Iba);
		~AnimalSilvestre();

		string getIbama();
		void setIbama(string Iba);
};

#endif