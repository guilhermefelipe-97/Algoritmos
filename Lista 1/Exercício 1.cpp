#include <iostream>
using namespace std;

int main()
{
    int anos, meses, dias, soma;
    cout<<"Digite quantos anos voce tem:";
    cin>>anos;
    cout<<"Digite quantos meses voce tem:";
    cin>>meses;
    cout<<"Digite quantos dias voce tem:";
    cin>>dias;
    anos = anos * 360;
    meses = meses * 30;
    soma = anos + meses + dias;
    cout<<"Voce tem: " << soma << " dias de vida." ;

    return 0;
}

