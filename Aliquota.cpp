#include <iostream>
#include <locale>

using namespace std;

int main(){
	float precoCompra, precoVenda;
	float aliquota = 1.2;
	setlocale(LC_ALL, "ptb");
	cout << "Insira o valor de compra: R$ ";
	cin >> precoCompra;
	precoVenda = precoCompra * aliquota;
	cout << "O preço para venda é: R$ " << precoVenda;
}
