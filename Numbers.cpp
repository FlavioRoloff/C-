#include <iostream>
#include <locale>

using namespace std;

int main(){
	int num, parImpar;
	setlocale(LC_ALL, "ptb");
	cout<<"Por favor, informe um número: ";
	cin>>num;
	parImpar=num%2;
	if(parImpar==0){
		cout<<num<<" é par."<<endl;
	}
	else{
		cout<<num<<" é ímpar."<<endl;
	}
	if(num>0){
		cout<<num<<" é positivo."<<endl;
	}
	else if(num==0){
		cout<<num<<" é nulo."<<endl;
	}
	else{
		cout<<num<<" é negativo."<<endl;
	}
}
