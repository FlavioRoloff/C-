#include <iostream>
#include <locale>

using namespace std;

int main(){
	int num, parImpar;
	setlocale(LC_ALL, "ptb");
	cout<<"Por favor, informe um n�mero: ";
	cin>>num;
	parImpar=num%2;
	if(parImpar==0){
		cout<<num<<" � par."<<endl;
	}
	else{
		cout<<num<<" � �mpar."<<endl;
	}
	if(num>0){
		cout<<num<<" � positivo."<<endl;
	}
	else if(num==0){
		cout<<num<<" � nulo."<<endl;
	}
	else{
		cout<<num<<" � negativo."<<endl;
	}
}
