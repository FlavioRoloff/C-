#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int idade;
	cout<<"Por favor, informe a idade do competidor: ";
	cin>>idade;
	if(idade>=7 && idade<=12){
		cout<<"Categoria infantil.";
	}
	else if(idade>=13 && idade <=17){
		cout<<"Categoria juvenil.";
	}
	else if(idade>=18 && idade<=49){
		cout<<"Categoria adulta.";
	}
	else if(idade>=50){
		cout<<"Categoria senior.";
	}
}
