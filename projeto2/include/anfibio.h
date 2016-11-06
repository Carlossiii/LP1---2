#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include "animal.h"

using namespace std;

class Anfibio: public Animal{
	protected:
		int total_mudas;
		string ultima_muda;

	public:
		Anfibio();
		Anfibio(int Total, string Ulti);
		~Anfibio();

		int getTotal_mudas();
		void setTotal_mudas(int Total);

		string getUltimo_muda();
		void setUltimo_muda(string Ulti);
};

#endif