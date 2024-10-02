#include <iostream>
using namespace std;

int main(){
    int num, cont;
    float resultado = 1;
    cout << "Digite a casa: ";
    cin >> num;
    for (cont=1;cont<num;cont++){
    resultado = resultado * 2;
    }
    cout << resultado;
    }