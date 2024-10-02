/*17. Escreva um programa que leia números 10 inteiros, armazene-os em um vetor e 
os escreva na ordem contrária à de leitura. Obs: todos os acessos ao vetor devem ser 
feitos usando somente ponteiros, sem usar os índices. */
#include <iostream>
using namespace std;

void lervetor(int *v,int i);

    int main(){
        int v[10], i = 0;
        for (i=0;i<10;i++){
        cout << "Digite o elemento da posicao " << i << "\n";
        lervetor(v,i);
        }
        i = 20;
        lervetor(v,i);
    }

    void lervetor(int *v,int i){
        if (i==20){
        cout << "O vetor gerado foi: ";
        for (i=9;i>=0;i--){
        cout << v[i] << " ";
        }
        }else {
            cin >> v[i];
        }
    }