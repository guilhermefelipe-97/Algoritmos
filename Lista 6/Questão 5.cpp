/*5. Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando 
o usuário digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20 
clientes, a tela seja ser limpa e seja exibida uma nova tela perguntando se o usuário quer ver 
um relatório ou consultar um cliente individualmente. Se ele desejar ver o relatório, o 
sistema deverá exibi-lo conforme questão anterior. Se ele escolher consultar um cliente 
individualmente, o sistema deverá solicitar a identidade do cliente procurado, fazer uma 
busca no vetor e informar seus dados caso o cliente esteja cadastrado. Se não existir cliente 
cadastrado com aquela identidade, o sistema deverá informar “Cliente não cadastrado”. 
*/

#include <iostream>
using namespace std;

    struct registro{
        int identidade, telefone;
        string nome, endereco;
    };

    int main(){
        int i = 0, qtd = 0, buscaidentidade;
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

        system("cls");
        cout << "Deseja ver um relatorio ou consultar um cliente individualmente? (1 - Relatorio, 2 - Consulta individual)\n";
        cin >> resposta;
        if (resposta == '1'){
        for (i=0;i<qtd;i++){
            cout << cliente[i].nome << endl;
            cout << cliente[i].identidade << endl;
            cout << cliente[i].endereco << endl;
            cout << cliente[i].telefone << endl;
            cout << "\n";
        }
        }else{
            cout << "Digite a identidade do cliente:\n";
            cin >> buscaidentidade;
            for (i=0; i<qtd; i++){
                if (buscaidentidade == cliente[i].identidade){
                    cout << cliente[i].nome << endl;
                    cout << cliente[i].identidade << endl;
                    cout << cliente[i].endereco << endl;
                    cout << cliente[i].telefone << endl;
                    cout << "\n"; 
                }
            }
            if (i==qtd){
                    cout << "Cliente nao cadastrado.\n";
        }
        }
    }