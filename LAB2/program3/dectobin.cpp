#include <iostream>

using namespace std;

void dectobin(long int decimal){
	if (decimal != 0){
		dectobin(decimal/2);
		cout << decimal%2;
	}
}

int main (){
	long int num = 0;
	cout << "\nQual o número positivo que deseja ver na forma binária?" << endl;
	cin >> num;
	cout << "\nO número " << num << " em binário é o seguinte:" << endl;
	dectobin (num);
	cout << endl;
	return 0;
}