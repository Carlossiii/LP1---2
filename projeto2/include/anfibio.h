#include <iostream>
#include <string>
#include "animal.h"

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