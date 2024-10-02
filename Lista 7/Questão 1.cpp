/*1. Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada 
considerando-se apenas a maior nota de prova e a maior nota de trabalho. Elabore um 
algoritmo que, dadas as quatro notas de um aluno, informe a sua média. Para isso, utilize 
duas funções: uma que determine o maior valor entre as notas (de provas ou de 
trabalhos) e outra que calcule a média aritmética das duas maiores notas.*/
#include <iostream>
using namespace std;

float maiornota(float a, float b);
float medianotas(float a, float b);

    int main(){
        float a, b, c, d, maiortrab, maiorprova;
        cout << "Digite a nota da primeira e segunda prova\n";
        cin >> a >> b;
        maiorprova = maiornota(a, b);
        cout << "Digite a nota do primeiro e segundo trabalho\n";
        cin >> c >> d;
        maiortrab = maiornota(c, d);
        cout << "A media das notas foi de: " << medianotas(maiorprova, maiortrab);

    }

    float maiornota(float a, float b){
        if (a>b){
            return a;
        }else{
            return b;
        }
    }

    float medianotas(float a, float b){
        return ((a+b)/2);
    }