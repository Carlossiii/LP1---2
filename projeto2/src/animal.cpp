#include "animal.h"

Animal::Animal(){
	id = 0;
	classe = "";
	nome = "";
	cientifico = "";
	sexo = 0;
	tamanho = 0.0;
	dieta = "";
	veterinario = new Veterinario;
	tratador = new Tratador;
	batismo = "";
}

Animal::Animal(int Id, string Classe, string Nome, string Cient, char Sexo, float Tam, string Dieta, Veterinario* Vet, Tratador* Tra, string Bat)
	: id(Id), classe(Classe), nome(Nome), cientifico(Cient), sexo(Sexo), tamanho(Tam), dieta(Dieta), veterinario(Vet), tratador(Tra), batismo(Bat) {}

Animal::~Animal (){}

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

Veterinario* Animal::getVeterinario(){return veterinario;}

void Animal::setVeterinario(Veterinario *v){veterinario = v;}

Tratador* Animal::getTratador(){return tratador;}

void Animal::setTratador(Tratador *t){tratador = t;}

string Animal::getBatismo(){return batismo;}

void Animal::setBatismo(string Bat){batismo = Bat;}

istream& operator>> (istream &Is, Animal &Ani) {
	string line;

	getline(Is, line);
	istringstream iss(line);

	iss>> Ani.id;
	iss.ignore();
	getline(iss, Ani.classe, ';');
	getline(iss, Ani.nome, ';');
	getline(iss, Ani.cientifico, ';');
	iss>> Ani.sexo;
	iss.ignore();
	getline(iss, Ani.tamanho, ';');
	getline(iss, Ani.dieta, ';');
	getline(iss, Ani.batismo, ';');
	/*
	if(classe == "Amphibia"){
		iss>> Ani.total_mudas;
		iss.ignore();
		getline(iss, Ani.ultima_muda);
	}
	else if(classe == "Reptilia"){
		iss>> Ani.venenoso;
		iss.ignore();
		getline(iss, Ani.tipo_veneno);
	}
	else if(classe == "Aves"){
		iss>> Ani.tamanho_bico;
		iss.ignore();
		iss>> Ani.envergadura;
		iss.ignore();
		//falta adicionar if e else para dados de AveNativa e AveExotica
	}
	else if(classe == "Mammalia"){
		getline(iss, a.cor_pelo);
	}
	*/
	return Is;
}

ostream& operator<< (ostream &Os, Animal &Ani) {

	Os << "Identificador: " << Ani.id << endl;
	Os << "Classe: " << Ani.classe << endl;	
	Os << "Nome: " << Ani.nome << endl;
	Os << "Nome científico: " << Ani.cientifico << endl;
	Os << "Sexo: " << Ani.sexo << endl;
	Os << "Tamanho médio em metros: " << Ani.tamanho << endl;
	Os << "Dieta predominante: " << Ani.dieta << endl;
	Os << "Nome de batismo: " << Ani.batismo << endl;

	return Os;
}