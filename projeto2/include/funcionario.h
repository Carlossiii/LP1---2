#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
//#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class Funcionario{
	protected:
		int id;
		string nome;
		string cpf;
		short idade;
		short tipo_sanguineo;
		char fatorRH;
		string especialidade;

	public:
		Funcionario();
		Funcionario(int Id, string Nome, string Cpf, short Idade, short Tipos, char Fator, string Esp);
		~Funcionario();

		int getId();
		void setId(int Id);

		string getNome();
		void setNome(string Nome);

		string getCpf();
		void setCpf(string Cpf);

		short getIdade();
		void setIdade(short Idade);

		short getTipo_sanguineo();
		void setTipo_sanguineo(short Tipos);

		char getFatorRH();
		void setFatorRH(char Fator);

		string getEspecialidade();
		void setEspecialidade(string Esp);
};

#endif