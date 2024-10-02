/*Elabore um algoritmo que mostre o calendário de um determinado mês. Os dados de entrada são o mês 
(cujos dados devem ser mostrados) e o dia da semana em que esse mês inicia. Assuma que esse mês está 
em um ano que não é bissexto, porém considere meses de 28, 30 e 31. O resultado deve ser como 
mostrado abaixo. Ex: janeiro, começando na 5a feira:*/

#include <iostream>
using namespace std;

int main(){
    int mes, dia, dias, cont = 1;
    cout << "Digite o mes, e o dia da semana do mes para ver o calendario: (2,3,4,5,6,7,8) " << endl;
    cin >> mes >> dia;
    cout << "\tDom    Seg     Ter     Qua     Qui     Sex     Sab" << endl;
    if ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) ||(mes == 8) || (mes == 10) || (mes == 12)){
        dias = 31; 
    }else if (mes == 2){
        dias = 28;
    }else{
        dias = 30;
    }
    if (dia == 2){
        cout << " \t\t" << cont;
    }else if (dia == 3){
        cout << " \t\t\t" << cont;
    }else if (dia == 4){
        cout << " \t\t\t\t" << cont;
    }else if (dia == 5){
        cout << " \t\t\t\t\t" << cont;
    }else if (dia == 6){
        cout << " \t\t\t\t\t\t" << cont;
    }else if (dia == 7){
        cout << " \t\t\t\t\t\t\t" << cont;
    }else if (dia == 8){
        cout << " \t" << cont;
    }
    for (cont = 2; cont <= dias; cont++){
        if ((dia == 2) && ((cont == 7)||(cont == 14)||(cont == 21)||(cont == 28))){
            cout << "\n";
        }else if ((dia == 3) && ((cont == 6)||(cont == 13)||(cont == 20)||(cont == 27))){
            cout << "\n";
        }else if ((dia == 4) && ((cont == 5)||(cont == 12)||(cont == 19)||(cont == 26))){
            cout << "\n";
        }else if ((dia == 5) && ((cont == 4)||(cont == 11)||(cont == 18)||(cont == 25))){
            cout << "\n";
        }else if ((dia == 6) && ((cont == 3)||(cont == 10)||(cont == 17)||(cont == 24))){
            cout << "\n";
        }else if ((dia == 7) && ((cont == 2)||(cont == 9)||(cont == 16)||(cont == 23)||(cont == 30))){
            cout << "\n";
        }else if ((dia == 8) && ((cont == 8)||(cont == 15)||(cont == 22)||(cont == 29)||(cont == 36))){
            cout << "\n";
        }
    cout << "\t" << cont;
    }
}