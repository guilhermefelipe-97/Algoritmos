#include <iostream>
using namespace std;

int main()
{
    int valor, parcelas, total;
    cout <<"Bem vindo a Loja Sua Melhor Compra\t\n";
    cout <<"Digite o valor do produto:";
    cin>>valor;
    cout<<"Digite a quantidade de parcelas em ate 10x:";
    cin>>parcelas;
    if (parcelas <= 10){
    parcelas = valor / parcelas;
    cout << "Ficaram parcelas de R$" << parcelas; 
	}else{ cout << "O numero de parcelas foi maior que 10, execute novamente."; return 0;
	}

	return 0;
}