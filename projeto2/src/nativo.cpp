#include "nativo.h"

Nativo::Nativo(){
	uf_origem = "";
	autorizacao = "";
}

Nativo::Nativo(string Uf, string Auto)
	: uf_origem(Uf), autorizacao(Auto) {}

Nativo::~Nativo() {}

string Nativo::getUf_origem(){return uf_origem;}

void Nativo::setUf_origem(string Uf){uf_origem = Uf;}

string Nativo::getAutorizacao(){return autorizacao;}

void Nativo::setAutorizacao(string Auto){autorizacao = Auto;}