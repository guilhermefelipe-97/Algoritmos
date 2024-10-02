/*19. Escreva um algoritmo que conte de 100 a 999 (inclusive) e exiba, um por linha, o produto dos três dígitos 
dos números. Por exemplo, inicialmente o programa irá exibir: 
100 = 0 (1*0*0) 
101 = 0 (1*0*1) 
102 = 0 (1*0*2) 
(...) 
110 = 0 (1*1*0) 
111 = 1 (1*1*1) 
112 = 2 (1*1*2) 
(...) 
999 = 9*9*9=729 
Faça o seu algoritmo dar uma pausa a cada 20 linhas para que seja possível ver todos os números pouco 
a pouco. Solicite que seja pressionada alguma tecla para ver a próxima sequência de números.*/
#include <iostream>
using namespace std;
    int main(){
        int cont, contador = 1;
        char resposta;
            for (cont = 100; cont <=999; cont++){
                cout << cont << " = " << ((cont/100) * (cont%100/10) * (cont%10)) << " (" << cont/100 << "*" << cont%100/10 << "*" << cont%10 << ")\n";
                if (contador%20==0){
                    cout << "Digite 'S' para continuar\n";
                    cin >> resposta;
                }
                contador++;
            }
    }