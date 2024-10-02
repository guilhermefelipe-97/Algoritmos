/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores positivos diferentes de n. 
Construa um programa em C que verifica se um dado número é perfeito. Ex: 6 é perfeito, pois 1+2+3 = 6.*/
#include <iostream>
using namespace std;

int main(){
    int num, soma = 0, aux;
    cout << "Digite um numero: ";
    cin >> num;
    aux = num;
    while (num>1){
        num--;
        if(aux%num==0){
            soma = soma + num;
        }
    }
    if (soma == aux){
        cout << "E um numero perfeito";
    }else{
        cout << "Nao e um numero perfeito";
    }
}