#include <iostream>
#include <locale>

using namespace std;

int main(){
	float salario; 
	float salMin = 1000.00;
	setlocale(LC_ALL, "ptb");
	cout<<"Por favor, informe o salário: ";
	cin>>salario;
	if(salario>salMin){
		cout<<"Seu salário está acima do salário mínimo."<<endl;
	}
	else if(salario=salMin){
		cout<<"Você recebe apenas o mínimo."<<endl;
	}
	else{
		cout<<"Seu salário está abaixo do salário mínimo."<<endl;
	}
}
