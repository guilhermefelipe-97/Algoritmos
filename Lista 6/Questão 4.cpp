/*4. Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada 
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar 
nos 20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e 
finalizar. OBS: Deve-se utilizar um vetor de registros na solução.*/

#include <iostream>
using namespace std;

    struct registro{
        int identidade, telefone;
        string nome, endereco;
    };

    int main(){
        int i = 0, qtd = 0;
        char resposta;
        registro cliente[20];
        do{
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
            cout << "Deseja cadastrar novo cliente? (S/N)" << endl;
            cin >> resposta;
            getchar();
            i++;
            qtd++;
        }while((i<20) && (resposta=='S'));

        for (i=0;i<qtd;i++){
            cout << cliente[i].nome << endl;
            cout << cliente[i].identidade << endl;
            cout << cliente[i].endereco << endl;
            cout << cliente[i].telefone << endl;
            cout << "\n";
        }
    }