/*6. Uma empresa tem para cada um dos seus 200 funcionários uma ficha contendo o nome, 
número de horas trabalhadas e o número de dependentes. Considerando que: 
- A empresa paga 12 reais por hora e 40 reais por dependentes; 
- Sobre o salário são feitos descontos de 8,5% para o INSS e 5% para IR. 
Elabore um algoritmo que declare o registro do funcionário, e leia seus dados enquanto o 
usuário desejar cadastrar (não permitindo o cadastro de mais de 200 funcionários). Após a 
leitura, escreva o nome, salário bruto, os valores descontados para cada tipo de imposto e 
qual o salário líquido de cada um dos funcionários que foram cadastrados. */
#include <iostream>
using namespace std;

struct ficha{
    string nome;
    int horastrab, numdep;
    float salariobruto, salarioliquido, inss, ir;  
};

    int main(){
        ficha funcionarios[200];
        int qtd = 0, i;
        char resp = 'S';
        while((resp=='S') && (qtd<2)){
            cout << "Digite o nome do funcionario:\n";
            getline(cin,funcionarios[qtd].nome);
            cout << "Digite a quantidade de horas trabalhadas:\n";
            cin >> funcionarios[qtd].horastrab;
            cout << "Digite o numero de dependentes:\n";
            cin >> funcionarios[qtd].numdep;
            funcionarios[qtd].salariobruto = (12*funcionarios[qtd].horastrab)+(40*funcionarios[qtd].numdep);
            funcionarios[qtd].inss = (0.085*funcionarios[qtd].salariobruto);
            funcionarios[qtd].ir = (0.05*funcionarios[qtd].salariobruto);
            funcionarios[qtd].salarioliquido = (0.865*funcionarios[qtd].salariobruto);
            qtd++;
            cout << "Deseja cadastrar mais algum funcionario: (S-sim , N-nao)\n";
            cin >> resp;
            getchar();
        }

        for (i=0;i<qtd;i++){
            cout << "\nNome: " << funcionarios[i].nome << endl;
            cout << "Salario bruto: " << funcionarios[i].salariobruto << endl;
            cout << "Salario liquido: " << funcionarios[i].salarioliquido << endl;
            cout << "Desconto do INSS: " << funcionarios[i].inss << endl;
            cout << "Desconto do IR: " << funcionarios[i].ir << endl;
        }







    }