#include "exotico.h"

Exotico::Exotico(){
	pais_origem = "";
}

Exotico::Exotico(string Pais)
	: pais_origem(Pais) {}

string Exotico::getPais_origem(){return pais_origem;}

void Exotico::setPais_origem(string Pais){pais_origem = Pais;}