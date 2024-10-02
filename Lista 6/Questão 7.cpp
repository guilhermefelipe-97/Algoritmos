/*7. Elabore um algoritmo que defina um registro capaz de armazenar as seguintes informações 
sobre um determinado cliente de um banco: nome, CPF, RG, número da conta, data de 
abertura da conta e saldo. Em seguida manipule um vetor com 15 registros de clientes, onde 
cada registro é um elemento do tipo de dado definido. A manipulação do vetor é feita através 
das seguintes opções: cadastrar cliente, imprimir os dados de um determinado cliente com 
base no valor do campo CPF e imprimir todos os clientes com saldo negativo.*/
#include <iostream>
using namespace std;

    struct cliente{
        string nome, abertura;
        int cpf, rg, numconta;
        float saldo;
    };

    int main(){
        cliente banco[15];
        int opcao, i = 0, busca, j;

        do{
        cout << "\tMENU\n";
        cout << "-------------------\n";
        cout << "1- Cadastrar cliente\n";
        cout << "2- Imprimir dados de um cliente\n";
        cout << "3- Exibir clientes com saldo negativo\n";
        cout << "4- Sair\n";
        cout << "Escolha uma opcao:\n";
        cin >> opcao;
        system("cls");
        switch (opcao){
            case 1:
            getchar();
            cout << "Digite o nome do cliente:\n";
            getline(cin,banco[i].nome);
            cout << "Digite a data de abertura da conta:\n";
            getline(cin,banco[i].abertura);
            cout << "Digite o CPF do cliente:\n";
            cin >> banco[i].cpf;
            cout << "Digite o RG do cliente:\n";
            cin >> banco[i].rg;
            cout << "Digite o numero da conta do cliente:\n";
            cin >> banco[i].numconta;
            cout << "Digite o saldo do cliente:\n";
            cin >> banco[i].saldo;
            i++;
            cout << "\nCliente cadastrado com sucesso.\n";
            system("pause");
            system("cls");
            break;
            case 2:
            cout << "Digite o CPF do cliente:\n";
            cin >> busca;
            for (j=0;j<i;j++){
                if (busca == banco[j].cpf){
                    cout << "CPF: " <<  banco[j].cpf << endl;
                    cout << "Nome: " <<  banco[j].nome << endl;
                    cout << "RG: " <<  banco[j].rg << endl;
                    cout << "Numero da conta: " <<  banco[j].numconta << endl;
                    cout << "Data de abertura da conta: " <<  banco[j].abertura << endl;
                    cout << "Saldo: " << banco[j].saldo << endl;
                    j = i+1;
                    system("pause");
                    system("cls");
                }
            }
            if (j==i){
                cout << "CPF nao encontrado.\n";
                system("pause");
                system("cls");
            }
            break;
            case 3:
            for (j=0;j<i;j++){
                if (banco[j].saldo < 0){
                    cout << "CPF: " << banco[j].cpf << endl;
                    cout << "Nome: " << banco[j].nome << endl;
                    cout << "RG: " << banco[j].rg << endl;
                    cout << "Numero da conta: " << banco[j].numconta << endl;
                    cout << "Data de abertura da conta: " << banco[j].abertura << endl;
                    cout << "Saldo: " << banco[j].saldo << endl;
                }
            }
            break;
            case 4:
            cout << "Programa finalizado.\n";
            break;
            default:
            cout << "Opcao invalida.\n";
            system("pause");
            system("cls");
            break;
        }
        }while((opcao != 4) && (i<15));
    }