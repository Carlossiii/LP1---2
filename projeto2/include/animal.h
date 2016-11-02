#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include "tratador.h"
#include "veterinario.h"
//#include <string>

using namespace std;

class Animal{
	protected:
		int id;
		string classe;
		string nome;
		string cientifico;
		char sexo;
		float tamanho;
		string dieta;
		Veterinario veterinario;
		Tratador tratador;
		string batismo;

	public:
		Animal();
		Animal(int Id, string Classe, string Nome, string Cient, char Sexo, float Tam, string Dieta, string Bat);
		~Animal();

		int getId();
		void setId(int Id);
		
		string getClasse();
		void setClasse(string Classe);

		string getNome();
		void setNome(string Nome);

		string getCientifico();
		void setCientifico(string Cient);

		char getSexo();
		void setSexo(char Sexo);

		float getTamanho();
		void setTamanho(float Tam);

		string getDieta();
		void setDieta(string Dieta);

		string getBatismo();
		void setBatismo(string Bat);
};

#endif