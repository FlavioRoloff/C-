#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int hora;
	cout<<"Digite a hora: ";
	cin>>hora;
	if(hora>=6 && hora<=18){
		cout<<"Ainda � dia.";
	}
	else{
		cout<<"J� � noite.";
	}
}
