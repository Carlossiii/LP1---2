#include "ave.h"

Ave::Ave(){
	tamanho_bico = 0;
	envergadura = 0;
}

Ave::Ave(int Tam, int Enve)
	: tamanho_bico(Tam), envergadura(Enve) {}

Ave::~Ave () {}

int Ave::getTamanho_bico(){return tamanho_bico;}

void Ave::setTamanho_bico(int Tam){tamanho_bico = Tam;}

int Ave::getEnvergadura(){return envergadura;}

void Ave::setEnvergadura(int Enve){envergadura = Enve;}