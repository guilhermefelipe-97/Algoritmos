/*3. Escreva um programa para cadastrar dois clientes de uma loja. As informações necessárias 
para o cliente são: identidade, nome, endereço e telefone. OBS: Deve ser usada uma 
estrutura de registro para a construção deste cadastro.*/
#include <iostream>
using namespace std;

    struct registro{
        int identidade, telefone;
        string nome, endereco;
    };

    int main(){
        int i;
        registro cliente[2];
        for (i=0;i<2;i++){
            cout << "Digite o nome do cliente " << i+1 << endl;
            getline(cin,cliente[i].nome);
            cout << "Digite o identidade do cliente " << i+1 << endl;
            cin >> cliente[i].identidade;
            getchar();
            cout << "Digite o endereco do cliente " << i+1 << endl;
            getline(cin,cliente[i].endereco);
            cout << "Digite o telefone do cliente " << i+1 << endl;
            cin >> cliente[i].telefone;
            getchar();
        }

        for (i=0;i<2;i++){
            cout << cliente[i].nome << endl;
            cout << cliente[i].identidade << endl;
            cout << cliente[i].endereco << endl;
            cout << cliente[i].telefone << endl;
        }

    }