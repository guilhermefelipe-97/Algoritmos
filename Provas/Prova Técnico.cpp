#include <iostream>
using namespace std;

int main(){ 
    float compra, premio;
    int nascimento, cupom = 0, cupomtotal = 0;
    char resposta;
    cout << "Digite o valor da compra:\n";
    cin >> compra;
    cout << "Digite o seu mes de nascimento:\n";
    cin >> nascimento;
    if ((nascimento>0)&&(nascimento<13)){
        cout << "Voce comprou comida junina? (s-sim|n-nao)\n";
        cin >> resposta;
        if (nascimento > 6){
            cout << "Voce ainda fara aniversario esse ano.\n";
        }else if (nascimento <6){
            cout << "O seu aniversario ja passou.\n";
        }else{
            cout << "Voce e o aniversariante do mes.\n";
        }
        switch (resposta){
            case 's':
            cout << "Gosta de comida tipica.\n";
            if (nascimento == 6){
                cupom += 6;
            }else{
                cupom += 4;
            }
            break;
            case 'n':
            cout << "Nao gosta de comida tipica.\n";
            break;
        }
        cupomtotal = compra/20;
        cupomtotal += cupom;
        cout << "O total de cupons foi de: " << cupomtotal << "\n";
        premio = (compra*0.45);
        cout << "Caso seu cupom seja o vencedor o premio sera de R$ " << premio;
    }else{
        cout << "Mes nao existe.";
    }
}