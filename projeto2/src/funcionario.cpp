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

Funcionario(int Id, string Nome, string Cpf, short Idade, short Tipos, char Fator, string Esp)
	: idade(Id), nome(Nome), cpf(Cpf), idade(ida), tipo_sanguineo(ts), fatorRH(Fator), especialidade(Esp) {}

int Funcionario::getId(){return id;}

string Funcionario::getNome(){return nome;}

string Funcionario::getCpf(){return cpf;}

short Funcionario::getIdade(){return idade;}

short Funcionario::getTipo_sanguineo(){return tipo_sanguineo;}

char Funcionario::getFatorRH(){return fatorRH;}

string Funcionario::getEspecialidade(){return especialidade;}

void Funcionario::setId(int Id){id = Id;}

void Funcionario::setNome(string Nome){nome = Nome;}

void Funcionario::setCpf(string Cpf){cpf = Cpf;}

void Funcionario::setIdade(short Idade){idade = Idade;}

void Funcionario::setTipo_sanguineo(short Tipos){tipo_sanguineo = Tipos;}

void Funcionario::setFatorRH(char Fator){fatorRH = Fator;}

void Funcionario::setEspecialidade(string Esp){especialidade = Esp;}