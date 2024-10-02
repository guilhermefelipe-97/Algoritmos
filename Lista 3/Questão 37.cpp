/*Elabore um algoritmo que leia vários números reais e escreva, para cada um, o valor arredondado a partir
do arredondamento pertinente. Considere que: o arredondamento deve ser feito para mais (próximo
inteiro) se a parte decimal do número for maior que 0,5; o arredondamento deve ser feito para menos
(inteiro anterior) se a parte decimal do número for menor que 0,5; caso a parte decimal seja = 0,5, deve
ser perguntado ao usuário se ele deseja arredondar para mais ou para menos e, após a resposta, deve
ser feito o arredondamento solicitado. O algoritmo deve parar quando for digitado 0. */
#include <iostream>
using namespace std;

int main(){
    float numero;
    int num;
    char resposta;
    bool sinal;
    do{
        sinal = false;
    cout << ("Digite um numero: ");
    cin >> numero;
    if (numero<0){
            numero = numero * -1;
            sinal = true;
        }
    num = numero;
    if (num == numero){
        if (sinal==true){
                numero = numero * -1;
            } 
       cout << numero << "\n";
    }else{
    numero = numero - num;
    if (numero!=0){
        if (numero>0.5){
            num++;
            if (sinal==true){
                num = num * -1;
            }
            cout << num << "\n";
        }else if (numero<0.5){
            if (sinal==true){
                num = num * -1;
            }
            cout << num << "\n";
        }else if (numero == 0.5){
            cout << "Deseja arredondar para mais ou menos? (+ ou -) ";
            cin >> resposta;
            if (resposta == '+'){
                num++;
                if (sinal==true){
                num = num * -1;
            }
                cout << num << "\n";
            }else{
                if (sinal==true){
                num = num * -1;
            }
                cout << num << "\n";
            }
        }
    }
    }
    }while (numero!=0);
    return 0;
}