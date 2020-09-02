#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int hora;
	cout<<"Digite a hora: ";
	cin>>hora;
	if(hora>=6 && hora<=18){
		cout<<"Ainda é dia.";
	}
	else{
		cout<<"Já é noite.";
	}
}
