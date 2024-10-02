#include <iostream>
using namespace std;

int main(){
    int codMot, numMultas, aux, maxMultas = 0, maior;
    float valorMulta, somaMultas, totalMultas = 0;
    char resposta;
    do{
        cout << "Digite numero da carteira do motorista, numero de multas e o valor delas: ";
        cin >> codMot >> numMultas;
        aux = 1;
        somaMultas = 0;
        while(aux <= numMultas){
            cin >> valorMulta;
            somaMultas = somaMultas + valorMulta;
            aux++;        
        }
        if (numMultas>maxMultas){
            maior = codMot;
            maxMultas = numMultas;
        }
        maxMultas = numMultas;
        cout << "A divida total do motorista " << codMot << " e R$ " << somaMultas;
        totalMultas = totalMultas + somaMultas;
        cout << "\nTem mais motoristas? ";
        cin >> resposta;
    }while(resposta == 's');
    cout << "O total arrecadado em multas foi de R$ " << totalMultas << "\n";
    cout << "O motorista com maior numero de multas foi o " << maior;
}