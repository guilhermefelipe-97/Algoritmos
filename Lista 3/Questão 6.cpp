/*Em um jogo de adivinhação, o jogador deve descobrir um número entre 1 e 10 usando até três tentativas. 
A cada tentativa o jogador é informado se o número foi descoberto, se ele é maior ou menor do que a 
tentativa. Se após três tentativas o jogador não descobrir o número, então ele perde o jogo. Faça um 
algoritmo que implemente esse jogo, considerando que o número a ser descoberto será definido dentro 
do algoritmo e não estará visível para o usuário.*/
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int rodada = 1, numero, palpite, acerto = 0;
    numero = ((rand()%10)+1);
    cout << "Numero Secreto\n";
    cout << "Voce tem 3 tentativas para acertar o numero.\n";
    do{
        do{
        cout << "Rodada " << rodada << "\n";
        cout << "Digite um palpite entre 1 a 10:\n";
        cin >> palpite;
        if ((palpite<1)||(palpite>10)){
            cout << "Numero invalido.\n";
        }
        }while ((palpite<1)||(palpite>10));
    if (palpite>numero){
        cout << "O numero e menor.\n\n";
    }else if (numero>palpite){
        cout << "O numero e maior.\n\n";
    }else{
        cout << "Acertou.\n";
        acerto = 1;
    }
    rodada++;
    }while((rodada<4)&&(acerto==0));
    if (acerto==0){
        cout << "Perdeu.\n";
        cout << "O numero era " << numero << ".";
    }
}