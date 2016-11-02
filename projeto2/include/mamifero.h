#include <iostream>
#include <string>
#include "animal.h"

class Mamifero: public Animal{
	protected:
		string cor_pelo;

	public:
		Mamifero();
		Mamifero(string Cor);
		~Mamifero();

		string getCor_pelo();
		void setCor_pelo(string Cor);
};