/*Valendo 0,5 ponto para quem enviar um algoritmo em C++ que leia um vetor de 20 elementos inteiros e um número inteiro, 
utilizando APENAS UMA função, informe se o número existe no vetor E em qual posição se encontra, se existir.*/
#include <iostream>
using namespace std;

struct test{
    bool resposta = false;
    int posicao = -1;
};
void buscavetor(int *p, int buscar, int i, test *t);

    int main(){
        test t;
        int v[20], i, buscar;
        for (i=0;i<20;i++){
        cout << "Digite o elemento da posicao " << i << "\n";
        cin >> v[i];
        }
        i = 0;
        cout << "Digite o elemento para buscar: ";
        cin >> buscar;
        buscavetor(v, buscar, i, &t);
        if (t.resposta == true){
            cout << "Existe, e a sua posicao e a " << t.posicao;
        }else{
            cout << "Nao existe.\n";
        }
        return 0;
    }

    void buscavetor(int *p, int buscar, int i, test *t){
        for (i=0;i<20;i++){
            if (p[i]==buscar){
                t->resposta = true;
                t->posicao = i;
                i = 20;
            }else{
               t->resposta = false;
            }
        }
    }