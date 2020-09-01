#include <iostream>
#include <locale>

using namespace std;

int main(){
	int diasVivo, idade;
	setlocale(LC_ALL, "ptb");
	cout << "Há quantos dias você está vivo? ";
	cin >> diasVivo;
	idade=diasVivo/365;
	cout << "Você tem " << idade << " anos de idade.";
}
