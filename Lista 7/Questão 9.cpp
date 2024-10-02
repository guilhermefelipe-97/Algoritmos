/*9. Crie um algoritmo para manipular vetores. O seu programa deve implementar 
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2, 
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem 
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos 
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar 
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int 
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main. 
*/
#include <iostream>
using namespace std;

int inverteVetor(int *v1, int *v2, int n);
    int main(){
        int N = 0, v1[N], v2[N], i;
        cout << "Digite a quantidade de posicoes do vetor:\n";
        cin >> N;
        cout << "O maior valor encontrado no vetor foi: " << inverteVetor(v1, v2, N) << "\n";
        cout << "O vetor gerado v2 foi: ";
        for (i=0; i<N; i++){
            cout << v2[i] << " "; 
        }
        return 0;
    }

    int inverteVetor(int *v1, int *v2, int N){
        int i, j = N-1, maiorvalor = 0;
        for (i=0; i<N; i++){
            cout << "Digite o valor na posicao " << i << "\n"; 
            cin >> v1[i];
            if (v1[i]>maiorvalor){
                maiorvalor = v1[i];
            }
            v2[j] = v1[i];
            j--;
        }
        return maiorvalor;
    }