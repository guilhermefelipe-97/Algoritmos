/*8. Escreva uma função que determine a média e a situação de um aluno em uma 
disciplina. A função recebe como parâmetros as três notas de um aluno (p1, p2, e p3), 
seu número de faltas (faltas), o número total de aulas da disciplina (aulas) e o ponteiro 
para uma variável (media), conforme a seguinte assinatura: 
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na 
variável indicada pelo ponteiro media, a função deve armazenar a média do aluno, 
calculada como a média aritmética das três provas. Além disso, a função deve retornar 
um caractere indicando a situação do aluno no curso, definido de acordo com o seguinte 
critério: 
Em seguida, escreva a função principal de um programa que utiliza a função anterior para 
determinar a situação de um aluno. O programa deve: 
- Ler do teclado três números reais e dois números inteiros, representando as 
notas da p1, p2 e p3, o número de faltas e o número de aulas, respectivamente; 
- Chamar a função desenvolvida na primeira questão para determinar a média e a 
situação do aluno na disciplina; 
- Exibir a média (com apenas uma casa decimal) e a situação do aluno, isto é, 
“APROVADO”, “REPROVADO” ou “REPROVADO POR FALTAS”, dependendo do caractere 
retornado pela função, conforme a tabela acima.*/
#include <iostream>
#include <iomanip> 
using namespace std;
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);
    int main(){
        char resultado;
        float p1, p2, p3, media = 0;
        int faltas, aulas;
        cout << "Digite a primeira, segunda e terceira nota do aluno:\n";
        cin >> p1 >> p2 >> p3;
        cout << "Digite o numero de faltas e o numero de aulas:\n";
        cin >> faltas >> aulas;
        resultado = situacao(p1, p2, p3, faltas, aulas, &media);
        if (resultado == 'A'){
            cout << setprecision(1) << "A media foi de: " << media << endl;
            cout << "Aprovado.";
        }else if (resultado == 'R'){
            cout << "Reprovado.";
        }else{
            cout << "Reprovado por faltas.";
        }
    }
    char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
        *media = ((p1+p2+p3)/3);
        if (faltas <= (aulas*0.25)&&(*media>=6.0)){
            return 'A';
        }else if (faltas <= (aulas*0.25)&&(*media<6.0)){
            return 'R';
        }else{
            return 'F';
        }
    }