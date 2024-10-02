/*7. Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a multiplicação dos elementos 
de mesmo índice, colocando o resultado em um terceiro vetor V3. Mostre o vetor resultante. */
#include <iostream>
using namespace std;
    int main(){
        int V1[10], V2[10], V3[10], cont;
        for (cont = 0; cont < 10; cont++){
            cout << "Digite o elemento da posicao " << cont << " do vetor V1: ";
            cin >> V1[cont];
            cout << "Digite o elemento da posicao " << cont << " do vetor V2: ";
            cin >> V2[cont];
        }
        for (cont = 0; cont < 10; cont++){
            V3[cont] = (V1[cont] * V2[cont]);
            cout << V3[cont] << " ";
        }
    }