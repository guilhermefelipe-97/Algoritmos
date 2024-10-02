#include <iostream>
using namespace std;

int main()
{
    int anos, cigarrospordia;
    float preco, soma;
    cout<<"Digite ha quantos anos voce fuma:";
    cin>>anos;
    cout<<"Digite quantos cigarros voce fuma por dia:";
    cin>>cigarrospordia;
    cout<<"Digite o preco da carteira de cigarro:";
    cin>>preco;
    anos = anos * 365;
    preco = preco / 20;
    soma = preco * cigarrospordia * anos;
    cout << "O dinheiro gasto foi R$" << soma; 

	return 0;
}
