#include <iostream>
#include <locale>

using namespace std;

int main(){
	int diasVivo, idade;
	setlocale(LC_ALL, "ptb");
	cout << "H� quantos dias voc� est� vivo? ";
	cin >> diasVivo;
	idade=diasVivo/365;
	cout << "Voc� tem " << idade << " anos de idade.";
}
