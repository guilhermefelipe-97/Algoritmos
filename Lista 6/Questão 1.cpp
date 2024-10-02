/*1. Elabore um algoritmo preencha o cadastro de 10 alunos contendo matricula, nome, 
endereço e média geral. Após o preenchimento, deve ser somado o valor 0,5 às médias de 
todos os alunos que tiveram médias maiores que 5. Em seguida escreva o vetor final.*/
#include <iostream>
using namespace std;
    struct Aluno{
        int matricula;
        string nome, endereco;
        float media;
    };

    int main(){
        Aluno v[3];
        int i;
        for (i=0;i<3;i++){
            cout << "Digite a matricula do aluno " << i+1<< "\n";
            cin >> v[i].matricula;
            getchar();
            cout << "Digite o nome do aluno " << i+1<< "\n";
            getline(cin,v[i].nome);
            cout << "Digite o endereco do aluno " << i+1<< "\n";
            getline(cin,v[i].endereco);
            cout << "Digite a media do aluno " << i+1 << "\n";
            cin >> v[i].media;
            if (v[i].media > 5){
                v[i].media += 0.5;
            }
        }
        for (i=0;i<3;i++){
            cout << "Matricula do aluno " << i+1 << ":" << v[i].matricula << endl;
            cout << "Nome do aluno " << i+1 << ":" << v[i].nome << endl;
            cout << "Endereco do aluno " << i+1 << ":" << v[i].endereco << endl;
            cout << "Media do aluno " << i+1 << ":" << v[i].media << endl;
            cout << "\n";
        }
    }