#include <iostream>
#include <locale>

using namespace std;

int main(){
	float salario; 
	float salMin = 1000.00;
	setlocale(LC_ALL, "ptb");
	cout<<"Por favor, informe o sal�rio: ";
	cin>>salario;
	if(salario>salMin){
		cout<<"Seu sal�rio est� acima do sal�rio m�nimo."<<endl;
	}
	else if(salario=salMin){
		cout<<"Voc� recebe apenas o m�nimo."<<endl;
	}
	else{
		cout<<"Seu sal�rio est� abaixo do sal�rio m�nimo."<<endl;
	}
}
