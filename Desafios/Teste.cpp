/*Elabore um algoritmo que:
a) Declare o registro conta (campos int cpf, float valores[2], float diferenca e string situacao) e
as variáveis conta1 e conta2 (do tipo conta). Em seguida leia os campos cpf, valores[0] (com o
total da compra) e valores[1] (com o valor pago de cada uma das variáveis) e preencha
automaticamente os campos diferenca com a diferença entre o valor pago e o total da compra;
(valor 2,0)
b) Envie para a função situacaoConta as variáveis conta1 e conta2. Esta função deverá verificar
as respectivas diferenças e preencher os respectivos campos situacao com “quitada”, caso a
diferença seja maior ou igual a zero, e “pendente”, caso a diferença seja negativa. Esta função
não tem retorno. (valor 3,0)
c) Escreva no main o cpf e a situação de cada conta após a alteração das respectivas situações.
(valor 1,0)
d) Elabore outra função, verificaConta, que receba uma conta por valor, verifique e retorne
“devedor”, caso a situação seja “pendente”, ou “não devedor”, caso a situação seja “quitada”.
Utilize esta função no main para verificar as duas contas e escrever os resultados. (valor 2,0)
e) Insira os dados das duas contas em um vetor de contas, vetContas, percorra este vetor e
escreva todos os dados de todas as contas. (valor 2,0)*/

#include <iostream>
using namespace std;

struct conta{
    int cpf;
    float valores[2], diferenca;
    string situacao;
};

void situacaoConta (conta *conta1, conta *conta2);
string verificaConta (conta conta);

int main(){
    conta conta1, conta2, vetContas[2];
    int i;

    cout << "Digite o cpf:\n";
    cin >> conta1.cpf;
    cout << "Digite o valor da compra:\n";
    cin >> conta1.valores[0];
    cout << "Digite o valor pago:\n";
    cin >> conta1.valores[1];
    conta1.diferenca = conta1.valores[1] - conta1.valores[0];
    cout << "Digite o cpf da segunda conta:\n";
    cin >> conta2.cpf;
    cout << "Digite o valor da compra:\n";
    cin >> conta2.valores[0];
    cout << "Digite o valor pago:\n";
    cin >> conta2.valores[1];
    conta2.diferenca = conta2.valores[1] - conta2.valores[0];
    situacaoConta (&conta1, &conta2);
    cout << "O CPF " << conta1.cpf << " esta com a situacao " << conta1.situacao << endl;
    cout << "O CPF " << conta2.cpf << " esta com a situacao " << conta2.situacao << endl;
    cout << "A conta1 tem o status de " << verificaConta (conta1) << endl;
    cout << "A conta2 tem o status de " << verificaConta (conta2) << endl;

    vetContas[0] = conta1;
    vetContas[1] = conta2;
    
    for (i = 0; i<2; i++){
      cout << "\nDados da conta " << i + 1 << endl;
      cout << "CPF: " << vetContas[i].cpf << endl;
      cout << "Valor da compra: " << vetContas[i].valores[0] << endl;    
      cout << "Valor pago: " << vetContas[i].valores[1] << endl;
      cout << "Diferenca: " << vetContas[i].diferenca << endl;
      cout << "Situacao: " << vetContas[i].situacao << endl;  
    }
}

void situacaoConta (conta *conta1, conta *conta2){
    if (conta1->diferenca >= 0){
        conta1->situacao = "quitada";
    }else{
        conta1->situacao = "pendente";
    }
    if (conta2->diferenca >= 0){
        conta2->situacao = "quitada";
    }else{
        conta2->situacao = "pendente";
    }
}

string verificaConta (conta conta){
    if (conta.situacao == "pendente"){
        return "devedor";
    }else{
        return "nao devedor";
    }
}