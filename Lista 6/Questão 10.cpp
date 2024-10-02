/*10. Suponha que você esteja realizando uma pesquisa e precise obter os seguintes dados de um 
conjunto de n pessoas (n é informado pelo usuário): nome, sexo (1-M, 0-F), cor dos olhos, 
altura, peso e data de nascimento. Elabore um algoritmo que realize a leitura desses dados 
e imprima duas listagens. A primeira listagem deve conter todos os dados (exceto o sexo) das 
mulheres e a outra deve conter todos os dados (exceto o sexo) dos homens. Ou seja, vamos 
apenas criar uma listagem dos homens e outra das mulheres */
#include <iostream>
using namespace std;

struct pesquisa{
    string nome, olhos, nasc;
    int sexo;
    float altura, peso;
};

    int main(){
        int n, i, j;
        cout << "Digite a quantidade de pessoas que serao obtidos os dados:\n";
        cin >> n;
        getchar();
        pesquisa dados[n];
        for (i=0; i<n; i++){
            cout << "Digite o nome da pessoa " << i+1 << "\n";
            getline(cin,dados[i].nome);
            cout << "Digite a cor dos olhos:\n";
            getline(cin,dados[i].olhos);
            cout << "Digite o sexo (1-M, 0-F):\n";
            cin >> dados[i].sexo;
            cout << "Digite a altura:\n";
            cin >> dados[i].altura;
            cout << "Digite o peso:\n";
            cin >> dados[i].peso;
            getchar();
            cout << "Digite a data de nascimento:\n";
            getline(cin,dados[i].nasc);
        }

        for (i=0; i<2; i++){
            if (i==1){
                cout << "\nTabela Masculina:\n\n";
            }else{
                cout << "\nTabela Feminina:\n\n";
            }
            for (j=0; j<n; j++){
            if (dados[j].sexo == i){
                cout << "Nome: " << dados[j].nome << endl;
                cout << "Cor dos olhos: " << dados[j].olhos << endl;
                cout << "Data de nascimento: " << dados[j].nasc << endl;
                cout << "Altura: " << dados[j].altura << endl;
                cout << "Peso: " << dados[j].peso << endl;
                cout << endl;
            }
            }
            cout << "---------------------------------------------------";
        }
    }