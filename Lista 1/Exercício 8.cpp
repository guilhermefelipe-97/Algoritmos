#include <iostream>
using namespace std;

int main()
{
    float cotacao,dolares;
    cout<<"Qual a cota��o de dolar atual?";
    cin>>cotacao;
    cout<<"Quantos d�lares voc� deseja converter?";
    cin>>dolares;
    dolares = cotacao * dolares;
    cout<<"O resultado � R$ " << dolares;

    return 0;
}
