#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

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
		Veterinario* veterinario;
		Tratador* tratador;
		string batismo;

	public:
		Animal();
		Animal(int Id, string Classe, string Nome, string Cient, char Sexo, float Tam, string Dieta, Veterinario* Vet, Tratador* Tra, string Bat);
		~Animal();

		virtual void Cadastro(Animal *Ani,ifstream &Is) = 0;
		
		virtual void Consulta(Animal *Ani) = 0;

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

		Tratador* getTratador();
		void setTratador(Tratador* Tra);

		Veterinario* getVeterinario();
		void setVeterinario(Veterinario* Vet);

		string getBatismo();
		void setBatismo(string Bat);

		friend istream& operator>> (istream &Is, Animal &Ani);
		friend ostream& operator<< (ostream &Os, Animal &Ani);
};

#endif