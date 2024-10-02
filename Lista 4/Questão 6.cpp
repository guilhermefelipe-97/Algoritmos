/*6. Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, trocar o primeiro elemento com o 
último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim sucessivamente. Ao final, 
escreva o vetor A modificado.*/
#include <iostream>
using namespace std;
    int main(){
        int A[20],B[20], cont;
        for (cont = 0; cont <20; cont++){
            cout << "Digite o numero na posicao " << cont << " ";
            cin >> A[cont];
            B[cont] = A[cont];
        }
        for (cont = 0; cont <20; cont++){
            A[19-cont] = B[cont];
        }
        for (cont = 0; cont <20; cont++){
            cout << A[cont] << " ";
        }
    }