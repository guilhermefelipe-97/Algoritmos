/*1. Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A 
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.*/
#include <iostream>
using namespace std;
    int main(){
        int A, M[6][6], i, i2, V[36], v = 0;
        cout << "Digite um valor inteiro: ";
        cin >> A;
        for(i=0;i<6;i++){
            for(i2=0;i2<6;i2++){
                cout << "Digite o elemento da linha " << i << " na coluna " << i2 << " ";
                cin >> M[i][i2];
                V[v] = A*(M[i][i2]);
                v++;
            }
        }
        cout << "Os elementos do vetor V sao:\n";
        for (i=0;i<36;i++){
            cout << V[i] << " ";
        }
    }