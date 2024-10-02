/*Uma pesquisa foi feita em uma escola para avaliar o grau de satisfação dos seus funcionários e alunos 
com a Instituição. Cada usuário deveria digitar o código 1 para funcionário ou 2 para aluno e, em seguida, 
a sua resposta de acordo com a tabela abaixo: 
Grau de satisfação Significado 
1 Satisfeito 
2 Não Satisfeito 
- Se for aluno, o algoritmo deverá solicitar ainda a idade do usuário. 
- Se for funcionário, o algoritmo deverá solicitar ainda o tempo de serviço. 
Ao final, o usuário deverá digitar "0" no grau de satisfação para sair da pesquisa. 
Elabore um algoritmo que leia uma sequência de respostas e, ao final, verifique e escreva: -
O percentual dos alunos que se mostraram "muito satisfeitos". 
- A média de idade dos alunos. 
- A resposta do funcionário com maior tempo de serviço (se mais de um funcionário tiver o maior tempo 
de serviço, mostrar suas respostas). 
- O total de pessoas que participaram da pesquisa.*/
#include <iostream>
using namespace std;

int main(){
    int opcao, servico, idade, nota, total = 0, funcionario, qtdaluno = 0, qtdfuncionario = 0, participantes;
    float percentual = 0, percentualalunos, mediatotal, media = 0;
    do{
        nota = 0;
        cout << "Pesquisa de Satisfacao\n";
        cout << "Digite 1 para funcionario ou 2 para aluno:\n";
        cin >> opcao;
        cout << "Digite sua nota de satisfacao (1 - Satisfeito, 2 - Nao satisfeito):\n";
        cin >> nota;
        if (nota!=0){
        switch (opcao){
            case 1:
            qtdfuncionario++;
            cout << "Digite o seu tempo de servico:\n";
            cin >> servico;
            if ((nota==1) && (servico>total)){
                funcionario = 1;
                total = servico;
            }else if((nota==2) && (servico>total)){
                funcionario = 2;
                total = servico;
            }
            break;
            case 2:
            qtdaluno++;
            cout << "Digite a sua idade:\n";
            cin >> idade;
            media += idade;
            if (nota==1){
                percentual++;
            }
            break;
        }
        }
    }while (nota!=0);
    percentualalunos = ((percentual/qtdaluno)*100);
    mediatotal = (media/qtdaluno);
    participantes = qtdfuncionario + qtdaluno;
    cout << "O percentual de alunos satisfeitos foi: " << percentualalunos << " %\n";
    cout << "A media da idade dos alunos e: " << mediatotal << " \n";
    cout << "O funcionario com maior tempo de servico digitou: " << funcionario << "\n";
    cout << "Participaram da pesquisa: " << participantes << " pessoas.\n";
}