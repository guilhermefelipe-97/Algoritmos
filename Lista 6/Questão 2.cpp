/*Elabore um algoritmo que 
- Crie a estrutura 
tAnimal: Registro tAnimal: 
nome: string 
raca: string 
idade: int 
- Declare um vetor Animais (5 posições de tAnimal) e cadastre 5 animais; 
- Verifique e escreva o nome do animal mais velho; 
- Pergunte ao usuário se deseja consultar os animais cadastrados solicitando uma raça para 
a busca. Se ele quiser, leia uma raça e, se existir animal da raça procurada, informe seus 
dados (nome e idade);*/
#include <iostream>
using namespace std;

    struct tAnimal{
        string nome, raca;
        int idade;
    };
    int main(){
        int i, maioridade = 0, indice, j;
        string busca;
        char resposta;
        tAnimal v[3];
        for(i=0;i<3;i++){
            cout << "Digite o nome do animal " << i+1 << ": ";
            getline(cin,v[i].nome);
            cout << "Digite a raca do animal " << i+1 << ": ";
            getline(cin,v[i].raca);
            cout << "Digite a idade do animal " << i+1 << ": ";
            cin >> v[i].idade;
            getchar();
            if (v[i].idade > maioridade){
                indice = i;
                maioridade = v[i].idade;
            }
        }
        cout << "O animal mais velho e o: " << v[indice].nome << endl;
        cout << "Deseja consultar os animais cadastrados por raca? (s - sim | n - nao)\n";
        cin >> resposta;
        getchar();
        if (resposta == 's'){
            cout << "Digite a raca: ";
            getline(cin,busca);
            for (j=0;j<3;j++){
                if (v[j].raca == busca){
                     cout << "O animal encontrado foi o: ";
                     cout << v[j].nome << endl;
                     cout << "idade: " << v[j].idade;
                     }
                }
        }else{
            cout << "Fim do programa.";
        }
    }