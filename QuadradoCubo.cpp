#include <iostream>
#include <locale>

using namespace std;

int main(){
	int numUser, quad, cubo;
	setlocale(LC_ALL, "ptb");
	cout << "Ol�. Por favor, digite um n�mero: ";
	cin >> numUser;
	quad=numUser * numUser;
	cubo=numUser * numUser * numUser;
	cout << "O quadrado de " << numUser << " �: " << quad << endl;
	cout << "O cubo �: " << cubo;
}
