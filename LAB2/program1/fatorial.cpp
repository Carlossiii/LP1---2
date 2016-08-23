#include <iostream>

using namespace std;

long long int fat(int x){
	long long int res = 0;
	res = x;
	x--;
	while (x!=0){
		res = res * x;
		x--;
	}
	return res;
}

int main(){
	int fatorial = 0, dnv = 0;
	long long int resultado = 0;
	cout << "\nInsira um número para descobrir o seu fatorial:" << endl;
	cin >> fatorial;
	resultado = fat (fatorial);
	cout << "O resultado é: " << resultado << endl;
	cout << "\nDeseja realizar outra operação?\nDigite 1 para sim e 0 para não." << endl;
	cin >> dnv;
	switch (dnv) {

		case 0:
			break;
		case 1:
			main();
			break;
		default:
			cout << "Opção inválida" << endl;
			break;
	}
	return 0;
}