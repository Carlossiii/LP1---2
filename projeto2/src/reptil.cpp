#include "reptil.h"

Reptil::Reptil(){
	venenoso = false;
	tipo_veneno = "";
}

Reptil::Reptil(bool Ven, string Tipo)
	: venenoso(Ven), tipo_veneno(Tipo) {}

Reptil::~Reptil() {}

bool Reptil::getVenenoso(){return venenoso;}

void Reptil::setVenenoso(bool Ven){venenoso = Ven;}

string Reptil::getTipo_veneno(){return tipo_veneno;}

void Reptil::setTipo_veneno(string Tipo){tipo_veneno = Tipo;}