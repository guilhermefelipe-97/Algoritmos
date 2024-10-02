/*16. Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores*/
#include <iostream>
using namespace std;
    int main(){
        int num, cont;
        cout << "Digite um numero: \n";
        cin >> num;
        cout << "Os divisores de " << num << " sao: " << "\n";
        for (cont=num; cont>= 1; cont--){
            if (num%cont==0){
                cout << cont << "\n";
            }
        }
    }