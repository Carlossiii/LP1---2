#include "animalsilvestre.h"

AnimalSilvestre::AnimalSilvestre(){
	ibama = "";
}

AnimalSilvestre::AnimalSilvestre(string Iba)
	: ibama(Iba) {}

AnimalSilvestre::~AnimalSilvestre () {}

string AnimalSilvestre::getIbama(){return ibama;}

void AnimalSilvestre::setIbama(string Iba){ibama = Iba;}