#include "funcionario.h"

Funcionario::Funcionario(){
	id = 0;
	nome = "";
	cpf = "";
	idade = 0;
	tipo_sanguineo = 0;
	fatorRH = 0;
	especialidade = "";
}

Funcionario::Funcionario(int Id, string Nome, string Cpf, short Idade, short Tipos, char Fator, string Esp)
	: id(Id), nome(Nome), cpf(Cpf), idade(Idade), tipo_sanguineo(Tipos), fatorRH(Fator), especialidade(Esp) {}

Funcionario::~Funcionario() {}

int Funcionario::getId(){return id;}

void Funcionario::setId(int Id){id = Id;}

string Funcionario::getNome(){return nome;}

void Funcionario::setNome(string Nome){nome = Nome;}

string Funcionario::getCpf(){return cpf;}

void Funcionario::setCpf(string Cpf){cpf = Cpf;}

short Funcionario::getIdade(){return idade;}

void Funcionario::setIdade(short Idade){idade = Idade;}

short Funcionario::getTipo_sanguineo(){return tipo_sanguineo;}

void Funcionario::setTipo_sanguineo(short Tipos){tipo_sanguineo = Tipos;}

char Funcionario::getFatorRH(){return fatorRH;}

void Funcionario::setFatorRH(char Fator){fatorRH = Fator;}

string Funcionario::getEspecialidade(){return especialidade;}

void Funcionario::setEspecialidade(string Esp){especialidade = Esp;}