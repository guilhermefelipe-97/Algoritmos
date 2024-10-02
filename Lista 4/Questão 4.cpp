/*4. Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
elementos.*/

#include <iostream>
using namespace std;
    int main (){
        int numeros [20], cont, maior = 0 , anterior = 0, indice;
        for (cont = 0; cont <20; cont++){
        cout << "Digite o numero na posicao " << cont << " ";
        cin >> numeros[cont];
        if ((numeros[cont] - anterior) > maior){
            maior = numeros[cont] - anterior;
            indice = cont;
        }
        anterior = numeros[cont];
        }
        cout << "A maior diferenca foi de: " << maior << endl;
        cout << "O indices foram: " << indice -1 << " e " << indice << endl;
    }