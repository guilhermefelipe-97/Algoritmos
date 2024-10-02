/*11. Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A por 
B sem usar o operador de resto (%).*/
#include <iostream>
using namespace std;
    int main(){
        int A, B, C, cont = 1;
        bool marcador = true;
        cout << "Digite dois valores: " << endl;
        cin >> A >> B;
        C = A/B;
        do{
        if ((C*B)==(A-cont)){
            cout << "O resto e " << cont;
            marcador = false;
        }else if((C*B)==A){
            cout << "O resto e 0";
            marcador = false;
        }else{
            cont++;
        }
        }while(marcador==true);
    }