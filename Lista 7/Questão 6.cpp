/*6. Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma 
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis 
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior 
elementos do vetor e atribuir às variáveis min e max respectivamente.*/
#include <iostream>
using namespace std;
void MinMax(int *v,int *min,int *max, int i);
    int main(){
        int v[10], i, min = 0, max = 0;
        for(i=0;i<10;i++){
        cout << "Digite o elemento na posicao " << i << endl;
        cin >> v[i];
        }
        i = 0;
        MinMax(v,&min,&max,i);
        cout << "O menor valor e " << min << "\n";
        cout << "O maior valor e " << max << "\n";
    }

    void MinMax(int *v,int *min,int *max, int i){
        for(i=0;i<10;i++){
            if (i==0){
                *min = v[i];
                *max = v[i];
            }
            if (v[i]<*min){
            *min = v[i];
            }else{
            *max = v[i];
            }
        }
    }