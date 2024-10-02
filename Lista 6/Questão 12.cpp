/*12. Elabore um registro que represente corretamente uma conta bancária de uma pessoa 
contendo os campos “número do banco”, “número da agência”, “número da conta”, “nome 
do cliente”, “senha” e “saldo atual” e um vetor capaz de armazenar 100 contas. Leia os dados 
de N contas e, após a leitura, mostre uma tela com as opções “entrar” ou “sair”. Se o usuário 
escolher “entrar”, ele deverá digitar o número da conta e a senha. O algoritmo deverá 
localizar a conta no vetor e, se a senha estiver correta, mostrar um menu com as opções de 
“saque”, “depósito”, “saldo” e “voltar a tela anterior”. A opção que o usuário escolher deverá 
ser executada pelo sistema e, em seguida, esta mesmo menu de opções deverá ser exibido 
novamente. Se a senha estiver incorreta ou a conta não existir, o sistema deverá informar a 
mensagem “erro de busca”. Somente quando o usuário escolher “sair”, o sistema deverá 
finalizar.
*/
#include <iostream>
using namespace std;    

struct conta{
    int numbanco, numagencia, numconta, senha;
    float saldo;
    string nome;
};
    int main(){
        conta cliente[2] = {};
        int opcao, i, busca, valor;
        bool flag;
        for (i = 0; i<2; i++){
            cout << "\nDigite o nome do cliente: " << i+1 << endl;
            getline(cin,cliente[i].nome);
            cout << "Digite o numero do banco:\n";
            cin >> cliente[i].numbanco;
            cout << "Digite o numero da agencia:\n";
            cin >> cliente[i].numagencia;
            cout << "Digite o numero da conta:\n";
            cin >> cliente[i].numconta;
            cout << "Digite a senha:\n";
            cin >> cliente[i].senha;
            getchar();
        }
        do{
            cout << "\nMENU\n";
            cout << "1 - Entrar\n";
            cout << "2 - Sair\n";
            cout << "Digite a opcao:\n";
            cin >> opcao;
            switch (opcao){
                case 1:
                cout << "Digite o numero da conta:\n";
                cin >> busca;
                flag = false;
                for (i = 0; i<2; i++){
                    if (busca == cliente[i].numconta){
                        flag = true;
                        cout << "Cadastro encontrado.\n";
                        cout << "Digite a senha:\n";
                        cin >> busca;
                        if (busca == cliente[i].senha){
                            do{
                            cout << "MENU\n";
                            cout << "1 - Saque\n";
                            cout << "2 - Deposito\n";
                            cout << "3 - Saldo\n";
                            cout << "4 - Voltar para tela anterior\n";
                            cout << "Digite a opcao:\n";
                            cin >> opcao;
                            switch (opcao){
                                case 1:
                                cout << "Digite o valor para saque:\n";
                                cin >> valor;
                                if(valor>cliente[i].saldo){
                                    cout << "Saldo insuficiente.\n";
                                }else{
                                cliente[i].saldo = cliente[i].saldo - valor;
                                }
                                break;
                                case 2:
                                cout << "Digite o valor para deposito:\n";
                                cin >> valor;
                                cliente[i].saldo = cliente[i].saldo + valor;
                                break;
                                case 3:
                                cout << "O saldo atual e:\n";
                                cout << cliente[i].saldo << endl;
                                break;
                                case 4: 
                                cout << "Voltando para tela anterior...\n";
                                break;
                                default:
                                cout << "Opcao invalida.\n";
                                break;
                            }
                            }while (opcao!=4);

                        }else{
                            cout << "Erro de busca.\n";
                        }
                    }
                }
                if (flag == false){
                    cout << "Erro de busca.\n";
                }
                break;
                case 2:
                cout << "Sistema finalizado.\n";
                break;
                default:
                cout << "Opcao invalida.\n";
                break;
            }
        }while(opcao != 2);
    }