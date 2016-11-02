#ifndef NATIVO_H
#define NATIVO_H

#include <iostream>
//#include <string>
#include "animalsilvestre.h"

using namespace std;

class Nativo: public AnimalSilvestre{
	protected:
		string uf_origem;
		string autorizacao;
		
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