/*. Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1,n2]. Use esta 
função em um programa que lê n1 e n2 do usuário e imprime a soma. */
#include <iostream>
using namespace std;

    int soma(int n1, int n2);
    int main(){
        int n1, n2;
        cout << "Digite dois numeros inteiros:\n";
        cin >> n1 >> n2;
        cout << "A soma dos inteiros entre " << n1 << " e " << n2 << " e igual a: " << soma(n1,n2); //Aqui eu chamo a função soma
    }

    int soma(int n1, int n2){ // aqui eu faço a soma entre os inteiros e retorno o resultado
        int i, soma = 0;
        for (i = (n1+1);i<n2;i++){
            soma += i;
        }
        return soma;
    }