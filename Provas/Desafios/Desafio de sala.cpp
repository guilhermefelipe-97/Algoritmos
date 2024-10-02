#include <iostream>
using namespace std;

int main(){
    int dia, mes, ano;
    do{
        cout << "Digite uma data valida: ";
        cin >> dia >> mes >> ano;
    }while(dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ano > 2024 || (((ano%4==0)&&!(ano%100==0))&&(dia>29 && mes==2)) || (!((ano%4==0)&&!(ano%100==0))&&(dia>28 && mes==2)));
    cout << dia << " / " << mes << " / "<< ano;
    return 0;
}
