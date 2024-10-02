/*3. Elabore um algoritmo que leia um vetor de 15 posições de números inteiros e pergunte ao usuário quais
elementos ele deseja ver: se os elementos que estão em índices pares ou se os elementos que estão em
índices ímpares. Mostre somente os elementos solicitados*/
#include <iostream>
using namespace std;

int main (){
    int numeros[15], cont, indice;
        for (cont = 0; cont <=14; cont++){
        cout << "Digite o numero da posicao " << cont << " ";
        cin >> numeros[cont];
        }
    cout << "Digite 1 para ver os elementos que estao em indices impares ou 2 para ver os elementos que estao em indices pares: ";
    cin >> indice;
    if (indice == 1){
        for (cont = 1; cont <14; cont = cont + 2){
        cout << numeros[cont] << "\t";
        }
    }else if (indice == 2){
        for (cont = 0; cont <15; cont = cont + 2){
        cout << numeros[cont] << "\t";
        }
    }else{
        cout << "Numero incorreto." << endl;
    }
}