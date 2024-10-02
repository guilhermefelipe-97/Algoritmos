/*2. Faça uma função que recebe um número inteiro por parâmetro e retorna 
verdadeiro se ele for par e falso se for ímpar.*/
#include <iostream>
using namespace std;

bool resultado(int a);
    int main(){
        int numero;
        cout << "Digite um numero:\n";
        cin >> numero;
        if (resultado(numero) == true){
            cout << "O numero e par.";
        }else{
            cout << "O numero e impar.";
        }

    }

    bool resultado(int a){
        if (a%2==0){
            return true;
        }else{
            return false;
        }
    }