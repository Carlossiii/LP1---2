#include "mamifero.h"

Mamiforo::Mamiforo(){
	cor_pelo = "";
}

Mamiforo::Mamiforo(string Cor)
	: cor_pelo(Cor) {}

string Mamiforo::getCor_pelo(){return cor_pelo;}

void Mamiforo::setCor_pelo(string Cor){cor_pelo = Cor;}