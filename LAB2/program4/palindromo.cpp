#include <iostream>
#include <string>

using namespace std;

int palindromo(){
	
}

int main(){
	string palavra;
	cout << "Insira a plavra que deseja verificar se é um palindromo." << endl;
	getline (cin, palavra);
	cin.ignore();
	palindromo (palavra);
	
	switch(palindromo){
		case 0:
			cout << "A palavra " << palavra << " não é um palindromo" << endl;
			break;
		case 1:
			cout << "A palavra " << palavra << " é um palindromo" << endl;
			break;
	}
	return 0;
}