#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	int idade;
	cout<<"Por favor, informe a idade do competidor: ";
	cin>>idade;
	while(idade!=-1){
	
		if(idade>=7 && idade<=12){
			cout<<"Categoria infantil. \n";
		}
		else if(idade>=13 && idade <=17){
			cout<<"Categoria juvenil. \n";
		}
		else if(idade>=18 && idade<=49){
			cout<<"Categoria adulta. \n";
		}
		else if(idade>=50){
			cout<<"Categoria senior. \n"; 
		}
		else if(idade<7){
			cout<<"Fora da faixa etária para competir. \n";
		}
		cout<<"Por favor, informe a idade do competidor: ";
		cin>>idade;
	}
}
