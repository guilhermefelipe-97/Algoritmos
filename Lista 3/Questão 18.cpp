/*18. Elabore um algoritmo que leia N dígitos numéricos, e gere um único número decimal. Ex: (2,3,2,0) = 2320*/
#include <iostream>
using namespace std;
    int main(){
        int num, cont, numero, total, cont2, acumulador, final = 0;

        cout << "Digite a quantidade de digitos do numero: \n";
        cin >> num;
        for (cont = num; cont>=1; cont--){
            cout << "Digite o numero: \n";
            cin >> numero;
            acumulador = 10;
            if (cont == 1){
                acumulador = 1;
            }
            for(cont2 = (cont-1); cont2>1; cont2--){
                acumulador = acumulador * 10;
            }
            total = numero * acumulador;
            final = final + total;
        }
        cout << final;
    }