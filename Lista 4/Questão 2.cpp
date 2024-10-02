#include <iostream>
using namespace std;

int main(){
    int numeros[20], cont, pares = 0;
    for (cont = 0; cont<=19; cont++){
        cout << "Escreva o valor na posicao " << cont << ": ";
        cin >> numeros[cont];
        if ((numeros[cont] % 2) == 0){
            numeros[cont] = 0;
            pares++;
        }
    }
    cout << "\nExistem " << pares << " numeros pares e estes foram trocados por zero.\n";
    for (cont = 0; cont<=19; cont++){
        cout << numeros[cont] << " ";
    }
}