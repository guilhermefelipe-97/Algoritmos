/*15. Uma loja tem, para cada um dos seus 10 funcionários, uma ficha contendo a identidade, o número de 
horas trabalhadas e a quantidade de dependentes do mesmo. Considerando que: 
a) A empresa paga 12 reais por hora e 40 reais por dependentes (salário bruto). 
b) Sobre o salário bruto são feitos descontos de 8,5% para o INSS e 5% para o IR (salário líquido). Elabore 
um algoritmo que leia os dados de todos os funcionários, calcule e escreva os salários bruto (total) e 
líquido (total – descontos) de cada funcionário e a identidade de todos os funcionários com mais de 3 
dependentes.*/
#include <iostream>
using namespace std;
    int main(){
        int identidade, horastrab = 0, dependentes = 0, cont;
        float salariobruto, salarioliquido;

        for (cont = 1; cont<=10; cont++){
            cout << "Digite a identidade, numero de horas trabalhadas e quantidade de dependentes:\n";
            cin >> identidade >> horastrab >> dependentes;
            salariobruto = (12*horastrab)+(dependentes*40);
            salarioliquido = salariobruto*0.865;
            cout << "O salario bruto e de " << salariobruto << " reais.\n";
            cout << "O salario liquido e de " << salarioliquido << " reais.\n";
            if (dependentes>3){
                cout << "O funcionario " << identidade << " tem mais de 3 dependentes.\n";
            }
        }
    }