/*5. Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes 
opções: soma, subtração, multiplicação e divisão*/
#include <iostream>
using namespace std;

void soma (float *a, float *total);
void subtracao (float *a, float *total);
void multiplicacao (float *a, float *total);
void divisao (float *a, float *total);

    int main(){
        bool inicio = false;
        char operacao;
        float a = 0, total = 0;
        do{
            if (inicio == false){
        cout << "Digite o numero:\n";
        cin >> a;
        total = a;
            }
        cout << "Digite a operacao: (+ - * % =)\n";
        cin >> operacao;
        if (operacao!='='){
        cout << "Digite o numero:\n";
        cin >> a;
        }
        switch (operacao){
            case '+':
            soma(&a,&total);
            break;
            case '-':
            subtracao(&a,&total);
            break;
            case '*':
            multiplicacao(&a,&total);
            break;
            case '%':
            divisao(&a,&total);
            break;
            case '=':
            cout << total << "\n";
            break;
            default:
            cout << "Operacao invalida.";
            break;
        }
        inicio = true;
        }while((operacao=='+')||(operacao=='-')||(operacao=='*')||(operacao=='%')||(operacao=='='));
        return 0;
    }

    void soma (float *a, float *total){
        *total+=*a;
    }
    void subtracao (float *a, float *total){
        *total-=*a;
    }
    void multiplicacao (float *a, float *total){
        *total*=*a;
    }
    void divisao (float *a, float *total){
        *total/=*a;
    }