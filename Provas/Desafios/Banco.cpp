#include <iostream>
using namespace std;

int main(){ 
    int senha, erros = 0, opcao;
    float saldo = 0 , deposito = 0, saque = 0, maiorsaque = 0;
    char a, d, m, i, n;
        do{ 
            system("cls");
           cout << "Digite o usuario e senha:\n";
           cin >> a >> d >> m >> i >> n >> senha;
           if (!((senha == 1234) && ((a == 'a') && (d == 'd') && (m == 'm') && (i == 'i') && (n == 'n')))){
            if (erros<2){
                cout << "Senha incorreta, restam: " << (2 - erros) << " tentativas.\n";
                system("pause");
            }
            erros++;
           }
        }while((!((senha == 1234) && ((a == 'a') && (d == 'd') && (m == 'm') && (i == 'i') && (n == 'n')))) && (erros<=2));
        if (erros>2){
            cout << "Acesso negado.";
        }else{
            cout << "Bem vindo ao Sistema.\n";
            do{
            system("cls");
        cout << "MENU PRINCIPAL\n"; 
        cout << "-------------------\n"; 
        cout << "1 - SALDO\n"; 
        cout << "2 - DEPOSITO\n"; 
        cout << "3 - SAQUE\n";
        cout << "4 - MAIOR SAQUE\n"; 
        cout << "5 - SAIR\n"; 
        cout << "--------------------\n";
        cout << "Digite a opcao desejada:\n";
        cin >> opcao;
        switch (opcao){
            case 1 : cout << "Seu saldo e: R$ " << saldo <<"\n";
            system("pause");
            break;
            case 2 : cout << "Digite o deposito: "; cin >> deposito;
            if (deposito>0){
            saldo = deposito + saldo;
            cout << "Deposito realizado com sucesso\n";
            system("pause");
            }else{
                cout << "Valor invalido.";
                system("pause");
            }
            break;
            case 3 : cout << "Digite o valor do saque: "; cin >> saque;
            if (saque<=saldo){
            if (saque>0){
            saldo = saldo - saque;
                cout << "Saque realizado com sucesso.\n";
                system("pause");
            if (saque>maiorsaque){
                maiorsaque = saque;
            }
            }else{
                cout << "Valor invalido.";
                system("pause");
            }
            }else{
                cout << "Saldo insuficiente para realizar saque.\n";
                system("pause");
            }
            break;
            case 4 : cout << "O maior saque foi de: R$" << maiorsaque << "\n";
            system("pause");
            break;
            case 5 : cout << "Deslogado com sucesso." << "\n";
            break;
            default:
                cout << "Opcao invalida.\n";
                system("pause");
        }    
            }while(opcao !=5);
        }
    system("pause");
}