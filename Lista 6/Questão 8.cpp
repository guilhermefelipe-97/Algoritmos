/*. Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente, 
e-mail, número de horas de acesso, página (‘S’-sim ou ‘N’-não). Elaborar um algoritmo que 
insira um conjunto de registros (máximo 500), calcule e mostre um relatório contendo o valor 
a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso custam R$ 35,00 e 
as horas que excederam tem o custo de R$ 2,50 por hora. Para os clientes que têm página, 
adicionar R$ 40,00. */
#include <iostream>
using namespace std;

    struct clientes{
        int codigo, horas;
        string email;
        char pagina;
        float total;
};

    int main(){
        clientes registro[500];
        int i = 0, j;
        char resp = 'S';
        do{ 
            cout << "Digite o codigo do cliente:\n";
            cin >> registro[i].codigo;
            cout << "Digite o numero de horas de acesso:\n";
            cin >> registro[i].horas;
            if (registro[i].horas<=20){
                registro[i].total = 35; 
            }else{
                registro[i].total = 35 + 2.5*(registro[i].horas - 20);
            }
            getchar();
            cout << "Digite o email do cliente\n";
            getline(cin,registro[i].email);
            cout << "O cliente tem pagina? (S-sim, N-nao)\n";
            cin >> registro[i].pagina;
            if (registro[i].pagina == 'S'){
                registro[i].total += 40;
            }
            cout << "Deseja cadastrar um novo cliente? (S-sim, N-nao)\n";
            cin >> resp;
            i++;
        }while((resp=='S') && (i<500));

        for (j = 0; j<i; j++){
            cout << "\nCliente " << registro[j].codigo << endl;
            cout << "Valor a pagar: " << registro[j].total << endl;
        }
    }