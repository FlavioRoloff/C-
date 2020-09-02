#include <iostream>
#include <locale>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	int cod, qtde;
	float valor;
	string item;
	
	cout<<"***CARDAPIO***\n";
	cout<<"100 - Hamburger - R$ 5.50 \n";
	cout<<"101 - Cheeseburger - R$ 6.50 \n";
	cout<<"102 - Big Burger - R$ 10.00 \n";
	cout<<"103 - Tudão - R$ 15.50 \n";
	cout<<"104 - Frangão - R$ 6.50 \n";
	cout<<"200 - Hot-dog simples - R$ 5.00 \n";
	cout<<"201 - Hot-dog completo - R$ 6.50 \n";
	cout<<"300 - Pizza - R$ 19.00 \n";
	cout<<"Por favor, informe o código do seu pedido: \n";
	cin>>cod;
	cout<<"Por favor, informe a quantidade desejada: \n";
	cin>>qtde;
	
	switch(cod){
		case 100:
			item="Hamburger"; valor=qtde*5.50;break;
			
		case 101:
			item="Cheeseburger"; valor=qtde*6.50;break;
			
		case 102:
			item="Big Burger"; valor=qtde*10.00;break;
			
		case 103:
			item="Tudão"; valor=qtde*15.50;break;
			
		case 104:
			item="Frangão"; valor=qtde*6.50;break;
		
		case 200:
			item="Hot-Dog simples"; valor=qtde*5.00;break;
		
		case 201:
			item="Hot-Dog completo"; valor=qtde*6.50;break;
		
		case 300:
			item="Pizza"; valor=qtde*19.00;break;
		
		default: cout << "Código inválido";		
	}
	cout<<"O valor de seus "<<qtde<<" "<<item<<" fica em: R$ "<<valor;
}
