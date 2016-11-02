#include "mamifero.h"

Mamifero::Mamifero(){
	cor_pelo = "";
}

Mamifero::Mamifero(string Cor)
	: cor_pelo(Cor) {}

string Mamifero::getCor_pelo(){return cor_pelo;}

void Mamifero::setCor_pelo(string Cor){cor_pelo = Cor;}