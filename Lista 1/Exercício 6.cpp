#include <iostream>
using namespace std;

int main()
{
    float custo,taxa,total;
    cout<<"Qual o custo de fabrica do carro?";
    cin>>custo;
    taxa = (73.0/100)*custo;
    total = taxa + custo;
    cout<<"O custo total é: " << total;

    return 0;
}
