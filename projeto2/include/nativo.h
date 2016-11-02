#ifndef NATIVO_H
#define NATIVO_H

#include <iostream>
#include <string>
#include "animalsilvestre.h"

class Nativo: public AnimalSilvestre{
	protected:
		string uf_origem;
		string autorização;
		
	public:
		Nativo();
		Nativo(string Uf, string Auto);
		~Nativo();

		string getUf_origem();
		void setUf_origem(string Uf);

		string getAutorizacao();
		void setAutorizacao(string Auto);
};

#endif