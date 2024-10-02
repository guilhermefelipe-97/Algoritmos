#include <iostream>
using namespace std;

int main(){
    int numeros[20], codigo, cont;
    for (cont = 0; cont <=19; cont++){
        cout << "Digite o numero na posicao " << cont << " ";
        cin >> numeros[cont];
        }
    cout << "Digite 1 para exibir a ordem direta do vetor ou 2 para ordem inversa:" << endl;
    cin >> codigo;
    if (codigo == 1){
        for (cont = 0; cont <=19; cont++){
        cout << numeros[cont] << " ";
        }
    }else if (codigo == 2){
        for (cont = 19; cont >=0; cont--){
        cout << numeros[cont] << " ";
        }
    }else{
        cout << "Digito incorreto." << endl;
    }
}