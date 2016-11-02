#include "anfibio.h"

Anfibio::Anfibio(){
	total_mudas = 0;
	ultimo_muda = "";
}

Anfibio::Anfibio(int Total, string Ulti)
	: total_mudas(Total), ultimo_muda(Ulti) {}

int Anfibio::getTotal_mudas(){return total_mudas;}

void Anfibio::setTotal_mudas(int Total){total_mudas = Total;}

string Anfibio::getUltimo_muda(){return ultimo_muda;}

void Anfibio::setUltimo_muda(string Ulti){ultimo_muda = Ulti;}