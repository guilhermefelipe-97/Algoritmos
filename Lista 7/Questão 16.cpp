/*16. Escreva uma função que receba como parâmetros dois vetores de inteiros: x1 e 
x2 e as suas respectivas quantidades de elementos: n1 e n2. A função deverá retornar 
um ponteiro para um terceiro vetor, x3, alocado dinamicamente, contendo a união de 
x1 e x2 e usar o ponteiro qtd para retornar o tamanho de x3. Sendo x1 = {1, 3, 5, 6, 7} e 
x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}. Assinatura da função: 
int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); */
#include <iostream>
using namespace std;

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd);

    int main(){
        int n1,n2, qtd = 0, *p, i;
        cout << "Digite a quantidade de elementos do vetor x1, e x2:\n";
        cin >> n1 >> n2;
        int x1[n1], x2[n2];
        p = uniao(x1, x2, n1, n2, &qtd);
        cout << "O novo vetor gerado foi: ";
        for (i=0;i<qtd;i++){
            cout << p[i] << " ";
            }
    }

    int* uniao(int *x1, int *x2, int n1, int n2, int *qtd){
        int i, j = n1 , n3, *p;
        n3 = n2 + n1;
        
        for (i=0;i<n1;i++){
            cout << "Digite o elemento " << i << " do vetor x1:\n";
            cin >> x1[i];
        }

        for (i=0;i<n2;i++){
            cout << "Digite o elemento " << i << " do vetor x2:\n";
            cin >> x2[i];
        }

        for (i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                if (x1[i]==x2[j]){
                    (*qtd)++;
                }
            }
        }

        *qtd = n3 - *qtd;
        p = new int [*qtd];
            for (i=0;i<n1;i++){
            p[i] = x1[i];
            }
            for (i=0;i<*qtd;i++){
                if (p[i] != x2[i]){
                    p[j] = x2[i];
                    j++;
                }
            }
        return p;
    }