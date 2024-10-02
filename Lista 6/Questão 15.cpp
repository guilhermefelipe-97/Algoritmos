/*15. Projeto: implementação de um CRUD
A partir de um registro à sua escolha, implemente um vetor 
de registros e as funcionalidades do menu abaixo:
 MENU PRINCIPAL
----------------------------------------------
1 – INCLUIR UM REGISTRO
2 – BUSCAR UM REGISTRO
3 – ALTERAR UM REGISTRO
4 – EXCLUIR UM REGISTRO
5 – LISTAR REGISTROS EXISTENTES
6 – SAIR DO SISTEMA
Considere que:
- O registro escolhido deverá ter, obrigatoriamente, um campo chave primária do tipo inteiro 
(pesquisar o que significa “campo chave primária”);
- Na inclusão de um registro, o campo chave primária deverá ser único, ou seja, não deverá 
ser permitida a inclusão de um registro cujo campo chave primária já exista no vetor;
- Na busca por um registro no vetor, o usuário deverá escolher o campo a partir do qual será 
efetuada a busca. Por exemplo, no caso do registro tProduto da questão 12, a busca poderia 
ser feita pelo campo “descrição”, “quantidade”, etc. Se existir mais de um registro 
cadastrado com aquela informação, todos deverão ser listados como resultados da busca;
- Na alteração de um registro, o algoritmo deverá garantir que o campo chave primária, após 
alterado, não poderá estar duplicado no vetor.
- Na exclusão do registro, o vetor não deve ficar com “buracos”, ou seja, quando um registro 
for excluído, todos os registros posteriores a este deverão ser movidos uma posição para a 
frente;
- Na listagem dos registros existentes, o algoritmo não deverá mostrar as posições do vetor 
sem registros incluídos previamente (com lixos de memória).
- Não poderão ser executadas inclusões se o vetor estiver cheio e não poderão ser realizadas 
exclusões se o vetor estiver vazio. O algoritmo deverá informar se uma dessas duas 
situações ocorrerem*/
#include <iostream>
using namespace std;

struct banco{
    string nome;
    int cpf, numconta;
    float saldo;
};

int buscar (banco *clientes, int *qtd, int busca, int i);
void incluir(int *qtd, banco *cliente, int cad);
void alterar (banco *cliente, int cad, int *qtd, int i);
void excluir (banco *cliente, int *qtd, int cad, int i);
void registros (banco *cliente, int *qtd, int i);

    int main(){
        banco cliente[100] = {};
        int opcao, qtd = 0, cad, i = 0, novocad;
        do{
            cout << "MENU PRINCIPAL\n";
            cout << "----------------------------------------------\n";
            cout << "1 - INCLUIR UM REGISTRO\n";
            cout << "2 - BUSCAR UM REGISTRO\n";
            cout << "3 - ALTERAR UM REGISTRO\n";
            cout << "4 - EXCLUIR UM REGISTRO\n";
            cout << "5 - LISTAR REGISTROS EXISTENTES\n";
            cout << "6 - SAIR DO SISTEMA\n";
            cout << "Digite a opcao\n";
            cin >> opcao;
            switch (opcao){
                case 1:
                if (qtd == 100){
                    cout << "O limite maximo de cadastros foi atingido.\n";
                }else{
                cout << "Digite o CPF para cadastro:\n";
                cin >> cad;
                getchar();
                novocad = buscar (cliente, &qtd, cad, i);
                if (novocad == -1){
                    incluir(&qtd, cliente, cad);
                }else{
                    cout << "CPF ja existente.\n";
                }
                }
                break;
                case 2:
                cout << "Digite o CPF para busca:\n";
                cin >> cad;
                novocad = buscar (cliente, &qtd, cad, i);
                if (novocad == -1){
                    cout << "CPF nao encontrado.\n";
                }else{
                    cout << "\nCliente encontrado.\n";
                    cout << "Nome: " <<  cliente[novocad].nome << endl;
                    cout << "CPF: " <<  cliente[novocad].cpf << endl;
                    cout << "Numero da conta: " <<  cliente[novocad].numconta << endl;
                    cout << "Saldo: R$ " <<  cliente[novocad].saldo << endl;
                    cout << "\n";
                }
                break;
                case 3:
                cout << "Digite o CPF para alterar:\n";
                cin >> cad;
                cad = buscar (cliente, &qtd, cad, i);
                alterar (cliente, cad, &qtd, i);
                break;
                case 4:
                if (qtd > 0){
                cout << "Digite o CPF para excluir:\n";
                cin >> cad;
                excluir (cliente, &qtd, cad, i);
                cout << "CPF excluido com sucesso.\n\n";
                }else{
                    cout << "Nao ha nenhum cadastro para excluir.\n\n";
                }
                break;
                case 5:
                cout << "Registros Existentes:\n";
                registros (cliente, &qtd, i);
                break;
                case 6:
                cout << "Fim do programa.\n";
                break;
                default:
                cout << "Opcao invalida.\n";
                break;
            }
        }while(opcao!=6);
    }

    int buscar (banco *clientes, int *qtd, int busca, int i){
        for (i=0; i<*qtd;i++){
            if (clientes[i].cpf == busca){
                return i;
            }
        }
        return -1;
    }

    void incluir(int *qtd, banco *cliente, int cad){
        cliente[*qtd].cpf = cad;
        cout << "Digite o nome do cliente:\n";
        getline(cin,cliente[*qtd].nome);
        cout << "Digite o numero da conta:\n";
        cin >> cliente[*qtd].numconta;
        cout << "Digite o saldo:\n";
        cin >> cliente[*qtd].saldo;
        cout << "\nCadastro realizado com sucesso.\n\n";
        (*qtd)++;
    }

    void alterar (banco *cliente, int cad, int *qtd, int i){
        int busca, retorno;
        cout << "Digite o novo CPF do contato:\n";
        cin >> busca;
        retorno = buscar (cliente, qtd, busca, i);
        if (retorno == -1){
            cliente[cad].cpf = busca;
            getchar();
            cout << "Digite o nome do cliente:\n";
            getline(cin,cliente[cad].nome);
            cout << "Digite o numero da conta:\n";
            cin >> cliente[cad].numconta;
            cout << "Digite o saldo:\n";
            cin >> cliente[cad].saldo;
            cout << "\nCadastro alterado com sucesso.\n";
        }else{
            cout << "CPF ja existente.\n";
        }
    }

    void excluir (banco *cliente, int *qtd, int cad, int i){
        int posicao;
        posicao = buscar (cliente, qtd, cad, i);
        for (i=posicao;i<*qtd;i++){
            cliente[i] = cliente[i+1];
        }
        (*qtd)--;
    }

    void registros (banco *cliente, int *qtd, int i){
        for (i=0;i<*qtd;i++){
            cout << "CPF: " << cliente[i].cpf << endl;
            cout << "Nome: " << cliente[i].nome << endl;
            cout << "Numero da conta: " << cliente[i].numconta << endl;
            cout << "Saldo: R$ " << cliente[i].saldo << endl;
            cout << "\n";
        }
    }