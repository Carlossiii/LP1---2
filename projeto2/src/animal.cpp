#include "animal.h"

Animal::Animal(){
	id = 0;
	classe = "";
	nome = "";
	cientifico = "";
	sexo = 0;
	tamanho = 0.0;
	dieta = "";
	batismo = "";
}

Animal::Animal(int Id, string Classe, string Nome, string Cient, char Sexo, float Tam, string Dieta, string Bat)
	: id(Id), classe(Classe), nome(Nome), cientifico(Cient), sexo(Sexo), tamanho(Tam), dieta(Dieta), batismo(Bat) {}

int Animal::getId(){return id;}

void Animal::setId(int Id){id = Id;}

string Animal::getClasse(){return classe;}

void Animal::setClasse(string Classe){classe = Classe;}

string Animal::getNome(){return nome;}

void Animal::setNome(string Nome){nome = Nome;}

string Animal::getCientifico(){return cientifico;}

void Animal::setCientifico(string Cient){cientifico = Cient;}

char Animal::getSexo(){return sexo;}

void Animal::setSexo(char Sexo){sexo = Sexo;}

float Animal::getTamanho(){return tamanho;}

void Animal::setTamanho(float Tam){tamanho = Tam;}

string Animal::getDieta(){return dieta;}

void Animal::setDieta(string Dieta){dieta = Dieta;}

string Animal::getBatismo(){return batismo;}

void Animal::setBatismo(string Bat){batismo = Bat;}