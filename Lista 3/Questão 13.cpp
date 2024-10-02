/*13. Elabore um algoritmo que leia um número inteiro qualquer e verifique se ele é quadrangular. Se for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...*/

#include <iostream>
using namespace std;
    int main (){
        int num, resultado = 0, cont, cont2;
        cout << "Digite um numero para verificar se e quadrangular:\n";
        cin >> num;
        for (cont = 1; resultado<num; cont++){
            resultado = cont*cont;
            cont2 = cont;
        }
        if (resultado == num){
            cout << "O numero e quadrangular\n";
            for (cont =  1; cont<=10 ; cont++){
                cont2++;
                resultado = cont2*cont2;
                cout << resultado << "\n";
        }
        }else{
            cout << "O numero nao e quadrangular";
        }
    }