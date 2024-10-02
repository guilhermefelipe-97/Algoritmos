/*7. Escreva uma função chamada Troca que troque os valores dos parâmetros 
recebidos. Essa função não deve ter retorno. */
#include <iostream>
using namespace std;
void Troca (int *a, int *b);
    int main(){
        int a = 10, b = 20;
        Troca(&a,&b);
        cout << a << " " << b;
        return 0;
    }

    void Troca (int *a, int *b){
        int c;
        c = *a;
        *a = *b;
        *b = c;
    }   
