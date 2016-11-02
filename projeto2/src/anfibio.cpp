#include "anfibio.h"

Anfibio::Anfibio(){
	total_mudas = 0;
	ultima_muda = "";
}

Anfibio::Anfibio(int Total, string Ulti)
	: total_mudas(Total), ultima_muda(Ulti) {}

Anfibio::~Anfibio () {}

int Anfibio::getTotal_mudas(){return total_mudas;}

void Anfibio::setTotal_mudas(int Total){total_mudas = Total;}

string Anfibio::getUltimo_muda(){return ultima_muda;}

void Anfibio::setUltimo_muda(string Ulti){ultima_muda = Ulti;}