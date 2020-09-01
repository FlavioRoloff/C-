#include <iostream>
#include <locale>

using namespace std;
int main() {
	setlocale(LC_ALL, "ptb");
    int anoAtual, anoNasc, idade;
    cout << "Ano atual: ";
    cin >> anoAtual;
    cout << "Ano de nascimento: ";
    cin >> anoNasc;
    idade=anoAtual-anoNasc;
    cout << "Você tem " << idade << " anos de idade."<<endl; 
	if(idade>=16){
		cout<<"Você já pode votar!";
	}
	else{
		cout<<"Você é muito jovem e não pode votar.";
	}
}
