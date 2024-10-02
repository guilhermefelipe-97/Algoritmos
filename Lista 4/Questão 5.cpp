/*5. Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar (armazenando em um novo 
vetor B) o primeiro elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e 
assim sucessivamente. Ao final, escreva os vetores A e B. */
#include <iostream>
using namespace std;
    int main (){
        int A[20], B[20], cont;
        for (cont = 0; cont <20; cont++){
            cout << "Escreva o numero da posicao " << cont << " ";
            cin >> A[cont];
            B[19-cont] = A[cont];
        }
        for (cont = 0; cont<20;cont++){
            cout << A[cont] << " ";
        }
        cout << "\n";
        for (cont = 0; cont<20;cont++){
            cout << B[cont] << " ";
        }
    }