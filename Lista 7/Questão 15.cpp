/*15. Considerando uma lista encadeada de valores inteiros definida pela struct abaixo: 
struct noh{ 
int valor; 
lista *próximo; 
}; 
Noh meuNoh; 
Elabore um algoritmo que apresente o menu abaixo e execute as operações de acordo 
com a escolha do usuário. 
-------------------------------------------------------
 MENU PRINCIPAL 
-------------------------------------------------------
1 – ADICIONAR ELEMENTO 
2 – REMOVER ELEMENTO 
3 – MOSTRAR TODOS OS ELEMENTOS 
4 – SAIR 
-------------------------------------------------------
Opção 1: o algoritmo deverá ler um elemento inteiro, inseri-lo em um novo noh e 
adicioná-lo no fim da lista utilizando a função adicionar que deve ser elaborada. Opção 
2: o algoritmo deverá ler um elemento inteiro, busca-lo na lista e, caso seja encontrado, 
removê-lo utilizando a função remover que deve ser elaborada. 
Opção 3: o algoritmo deverá exibir todos os elementos da lista utilizando a função 
relatorio que deve ser elaborada. */
#include <iostream>
using namespace std;

struct noh{ 
int valor; 
noh *proximo = nullptr; 
}; 

void adicionar(noh *&inicio, noh *&anterior, int qtd);
void buscar (noh *&inicio, int qtd);
void remover(noh *&inicio,int busca, int qtd);

    int main(){
    int opcao, qtd = 0, busca;
    noh *inicio;
    noh *anterior;

    do{
    cout << "-------------------------------------------------------\n";
    cout << "MENU PRINCIPAL\n";
    cout << "-------------------------------------------------------\n";
    cout << "1 - ADICIONAR ELEMENTO\n"; 
    cout << "2 - REMOVER ELEMENTO\n";
    cout << "3 - MOSTRAR TODOS OS ELEMENTOS\n";
    cout << "4 - SAIR\n";
    cout << "-------------------------------------------------------\n";
    cout << "Escola a opcao:\n";
    cin >> opcao;
    switch (opcao){
        case 1:
        adicionar(inicio, anterior, qtd);
        qtd++; 
        break;
        case 2:
        cout << "Digite o elemento para remover:\n";
        cin >> busca;
        remover(inicio,busca,qtd);
        qtd--;
        break;
        case 3:
        buscar (inicio, qtd);
        break;
        case 4:
        cout << "Programa finalizado.\n";
        break;
        default:
        cout << "Opcao invalida.\n";
        break;
    }
    }while(opcao!=4);
    }

    void adicionar(noh *&inicio, noh *&anterior, int qtd){
        noh *novo = new noh;
        if (qtd == 0){
            cout << "Digite o valor:\n";
            cin >> novo->valor;
            inicio = novo;
            anterior = novo;
        }else{
            cout << "Digite o valor:\n";
            cin >> novo->valor;
            anterior->proximo = novo;
            anterior = novo;
        }
    }

    void buscar (noh *&inicio, int qtd){
        int i;
        for (i=0; i<qtd; i++){
            cout << inicio->valor << " ";
            inicio = inicio->proximo;
        }
        cout << "\n";
    }

    void remover(noh *&inicio, int busca, int qtd) {
    noh *anterior = nullptr;
    noh *atual = inicio;
    noh *excluir;
    int i;

    for (i = 0; i < qtd; i++) {
        if (atual->valor == busca){
            if (i == 0){
                atual = atual->proximo;
                inicio = atual;
                i = (qtd+1);
            }else{
            excluir = atual;
            atual = atual->proximo;
            anterior->proximo = atual;
            delete excluir;
            }
        }else{
            anterior = atual;
            atual = atual->proximo;        
        }
    }
    }