#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int lado1, lado2, lado3;
	cout<<"Medida do lado 1: ";
	cin>>lado1;
	cout<<"Medida do lado 2: ";
	cin>>lado2;
	cout<<"Medida do lado 3: ";
	cin>>lado3;
	if(lado1==lado2 && lado2==lado3 && lado1==lado3){
		cout<<"O triângulo é equilátero";
	}
	else if(lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
		cout<<"O triângulo é isósceles";
	}
	else{
		cout<<"O triângulo é escaleno";
	}
}
