#ifndef AVE_H
#define AVE_H

#include <iostream>
//#include <string>
#include "animal.h"

using namespace std;

class Ave: public Animal{
	protected:
		int tamanho_bico;
		int envergadura;

	public:
		Ave();
		Ave(int Tam, int Enve);
		~Ave();

		int getTamanho_bico();
		void setTamanho_bico(int Tam);

		int getEnvergadura();
		void setEnvergadura(int Enve);
};

#endif