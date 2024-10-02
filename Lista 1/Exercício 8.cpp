#include <iostream>
using namespace std;

int main()
{
    float cotacao,dolares;
    cout<<"Qual a cotação de dolar atual?";
    cin>>cotacao;
    cout<<"Quantos dólares você deseja converter?";
    cin>>dolares;
    dolares = cotacao * dolares;
    cout<<"O resultado é R$ " << dolares;

    return 0;
}
