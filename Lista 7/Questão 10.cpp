/*10. Em seguida, utilizando o algoritmo anterior implemente outra função chamada 
multiplicaEscalar, que recebe como parâmetro dois vetores V1 e V2 (ambos de tamanho 
N), e um número inteiro X. A função deve multiplicar cada um dos elementos de V1 por 
X e armazenar os resultados em V2. A função deve possui a seguinte assinatura: void 
multiplica_escalar(int *v1, int *v2, int x); 
No main, utilize as funções inverteVetor e multiplicaEscalar para inverter um vetor de 
tamanho 10 fornecido pelo usuário e em seguida multiplicar esse vetor por um escalar 
também fornecido pelo usuário. Por último, o programa deverá exibir o vetor resultante. */
#include <iostream>
using namespace std;
void multiplica_escalar(int *v1, int *v2, int x); 
void inverteVetor(int *v1, int *v2, int n);
    int main(){
        int N = 10, v1[N], v2[N], i, x;
        inverteVetor(v1, v2, N);
        cout << "O vetor gerado v2 foi: ";
        for (i=0; i<N; i++){
            cout << v2[i] << " "; 
        }
        cout << "\nDigite o valor para multiplicar:\n";
        cin >> x;
        multiplica_escalar(v1, v2, x);
        cout << "O novo vetor gerado v2 foi: ";
        for (i=0; i<10; i++){
            cout << v2[i] << " "; 
        }
        return 0;
    }

    void inverteVetor(int *v1, int *v2, int N){
        int i, j = N-1;
        for (i=0; i<N; i++){
            cout << "Digite o valor na posicao " << i << "\n"; 
            cin >> v1[i];
            v2[j] = v1[i];
            j--;
        }
    }

    void multiplica_escalar(int *v1, int *v2, int x){
        int i, j = 9;
        for (i=0; i<10; i++){
            v2[i] = x*(v1[j]);
            j--;
        }
    }