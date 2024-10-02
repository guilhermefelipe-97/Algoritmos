/*9. Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int), 
Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo 
Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string), 
Ender (Endereco), Telefone (string) e Idade (int). 
- Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados; 
- Leia um endereço na variável do tipo endereço;
- Faça uma busca e liste os nomes de todas as pessoas cadastradas no vetor cujo bairro é o 
mesmo bairro do endereço cadastrado na variável do tipo endereço. */
#include <iostream>
using namespace std;

struct registro{
    string rua, bairro, cidade, estado;
    int numero;
};

struct dados{
    string nome, ender, telefone;
    int idade;
};

    int main(){
        registro endereco;
        dados pessoa[10];
        int i;

        cout << "Digite a rua:\n";
        getline(cin,endereco.rua);
        cout << "Digite o bairro:\n";
        getline(cin,endereco.bairro);
        cout << "Digite a cidade:\n";
        getline(cin,endereco.cidade);
        cout << "Digite o estado:\n";
        getline(cin,endereco.estado);

        for (i=0;i<10;i++){
        cout << "Digite o nome:\n";
        getline(cin,pessoa[i].nome);
        cout << "Digite o endereco:\n";
        getline(cin,pessoa[i].ender);
        cout << "Digite o telefone:\n";
        getline(cin,pessoa[i].telefone);
        }

        for (i=0;i<10;i++){
        if (endereco.bairro == pessoa[i].ender){
            cout << pessoa[i].nome << endl;
            cout << "Mora no bairro " << endereco.bairro << endl;
        }
        }
    }