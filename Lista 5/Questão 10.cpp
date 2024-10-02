/*10. Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da 
diagonal principal.
*/
#include <iostream>
using namespace std;
    int main(){
        int a[12][12], i, j , total = 0, contador = 0;
        for (i = 0; i<12 ; i++){
            for (j=0; j<12; j++){
                cout << "Digite o elemento da linha " << i << " coluna " << j << endl;
                cin>> a[i][j];
            }
        }
        for (i = 1; i<12 ; i++){
            for (j = 0; j<i;j++){
                total+= a[i][j];
                contador++;
            }
            }
        cout << "A media e: " << total/contador;
    }

   