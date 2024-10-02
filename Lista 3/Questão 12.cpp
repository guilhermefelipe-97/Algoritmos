/*12. O número 3025 possui a seguinte característica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia 
N números de 4 algarismos e escreva a mensagem “positivo” se o número tiver essa característica e 
“negativo” se não tiver. */
#include <iostream>
using namespace std;
    int main(){
        int A, C;
        float N, B;
        char resposta;
        do {
        cout << "Digite um numero de 4 algarismos: ";
        cin >> N;
        A = B = (N/100);
        B = B - A;
        B = B*100;
        C = A + B;
        if ((C*C) == N){
            cout << "Positivo." << endl;
        }else{
            cout << "Negativo." << endl;
        }
        cout << "Deseja testar mais algum numero? (s ou n)" << endl;
        cin >> resposta;
        }while (resposta == 's');
    }