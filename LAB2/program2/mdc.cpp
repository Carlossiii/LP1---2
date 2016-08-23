#include <iostream>

using namespace std;

int mdc(int xx, int yy){
	if (xx%yy == 0)
		return yy;
	else
		return mdc(yy, xx%yy);
}

int main(){
	int primeiro = 0, segundo = 0, res = 0;
	cout << "\n\n================" << endl;
	cout << " MDC CALCULATOR " << endl;
	cout << "================" << endl;
	cout << "\nInsira os dois valores à serem calculados." << endl;
	cout << "\nPrimeiro:" << endl;
	cin >> primeiro;
	cout << "Segundo:" << endl;
	cin >> segundo;

	res = mdc(primeiro, segundo);

	cout << "\nO resultado do MDC entre (" << primeiro << "," << segundo << ") é " << res << "!" << endl;

	return 0;
}