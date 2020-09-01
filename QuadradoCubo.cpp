#include <iostream>
#include <locale>

using namespace std;

int main(){
	int numUser, quad, cubo;
	setlocale(LC_ALL, "ptb");
	cout << "Olá. Por favor, digite um número: ";
	cin >> numUser;
	quad=numUser * numUser;
	cubo=numUser * numUser * numUser;
	cout << "O quadrado de " << numUser << " é: " << quad << endl;
	cout << "O cubo é: " << cubo;
}
