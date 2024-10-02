/*Numa universidade, cada aluno possui os seguintes dados: 
- Renda pessoal; 
- Renda familiar; 
- Total gasto com alimentação; 
- Total gasto com outras despesas. 
Elabore um algoritmo que calcule e escreva: 
- A porcentagem dos alunos que gasta acima de R$ 200,00 com outras despesas; 
- A quantidade de alunos com renda pessoal maior que renda familiar; 
- A porcentagem gasta com alimentação e outras despesas em relação ao somatório das rendas pessoal 
e familiar. 
O algoritmo deve finalizar quando for digitado 0 para a renda pessoal.*/
#include <iostream>
using namespace std;

int main(){
    int aluno = 0;
    float rendap, rendaf, gastoalimentacao, outrosgastos, despesas = 0, rendamaior = 0, rendatotal, rendatotal1, porcentagem, total;
    do{
        cout << "Digite a renda pessoal:\n";
        cin >> rendap;
        if (rendap!=0){
        aluno++;
        cout << "Digite a renda familiar:\n";
        cin >> rendaf;
        if (rendap>rendaf){
            rendamaior++;
        }
        cout << "Digite o gasto com alimentacao:\n";
        cin >> gastoalimentacao;
        cout << "Digite o gasto com outras despesas:\n";
        cin >> outrosgastos;
        if (outrosgastos>200){
            despesas++;
        }
        rendatotal = rendap + rendaf;
        rendatotal1 = gastoalimentacao + outrosgastos;
        porcentagem = ((rendatotal1/rendatotal) * 100);
        cout << "A porcentagem gasta com outras coisas em relacao ao somatorio da renda pessoal e familiar e de:" << porcentagem << "%\n";
    }
    }while(rendap!=0);
    total = ((despesas/aluno) *100);
    cout << "A porcentagem de alunos que gastam mais de 200 reais com outras despesas e de: " << total << "%\n";
    cout << "Alunos com renda pessoal maior que renda familiar e de: " << rendamaior;
}