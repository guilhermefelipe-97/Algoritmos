#include <iostream>
using namespace std;

int main()
{
    int custo,taxa,total;
    cout<<"Qual o custo de fabrica do carro?";
    cin>>custo;
    taxa = 0,75*custo;
    total = taxa + custo;
    cout<<"O custo total é: " << total;

    return 0;
}
