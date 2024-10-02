/*11. Elabore um algoritmo que apresente o menu abaixo e, de acordo com a opção 
escolhida pelo usuário, realize a respectiva operação conforme detalhamento. 
-------------------------------------------------------
 MENU PRINCIPAL 
-------------------------------------------------------
1 - ORDEM 
2 - DATA 
3 - SALÁRIO 
4 - MULTA 
5 - CALCULAR 
6 - SAIR 
-------------------------------------------------------
Opção 1: leia três valores inteiros e um char (‘c’ – crescente, ‘d’ – decrescente), passeos 
para uma função que deverá ordená-los de acordo com a ordem escolhida e retorná-los 
para o chamador, que deverá escrever o resultado da ordenação. 
Opção 2: Declare o registro Data contendo 3 campos inteiros, dia, mês e ano, e leia 5 
datas em um vetor de datas. Passe o vetor lido para uma função que que deverá verificar 
e retornar um vetor booleano contendo true em cada posição cuja data for válida e false 
em cada posição que a tada não for válida. Considerar meses de 30 e 31, desconsiderar 
anos bissextos. O chamador, após receber o resultado da função, deverá escrever uma 
mensagem de “Data Válida” ou “Data Válida” para cada resultado recebido no vetor. 
Exemplo: Vetor de Datas: 21/1/2000, 31/12/2012, 45/3/2000, 1/40/2000, 31/02/1999 
Saída da função: true, true, false, false, false 
Opção 3: leia o salário de uma pessoa e a sua quantidade de filhos e mande-os para uma 
função. A função deverá retornar quanto do salário da pessoa será dedicado a cada um 
dos seus filhos (considerando 10% para cada filho, desde que não exceda o 50% do valor 
total do salário. Se exceder, o valor para cada filho deverá ser 50% do salário dividido 
pelo total de filhos. O chamador deverá informar o valor do salário por filho ou, se a 
pessoa não tiver filhos, a mensagem “O seu salário é 100% para o seu próprio custeio”. 
Opção 4: leia a velocidade máxima permitida em uma avenida e a velocidade com que o 
motorista estava dirigindo nela, envie-os para uma função void que deverá calcular se a 
pessoa vai pagar multa e, se for, qual o valor da multa. Considere que serão pagos como 
multa: a) 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex.: 
velocidade máxima: 50km/h; motorista a 60km/h ou a 56km/h); b) 100 reais, se o 
motorista ultrapassar de 11 a 30 km/h a velocidade permitida. c) 200 reais, se estiver 
acima de 31km/h da velocidade permitida. A mensagem informando o valor da multa 
deverá ser escrita pelo chamador após a execução da função. 
Opção 5: leia o gabarito correto de uma prova e o gabarito de um aluno em uma matriz 
2x10 (10 respostas do gabarito na primeira linha da matriz e 10 repostas do aluno na 
segunda linha da matriz) e envie para uma função. A função deverá calcular e retornar o 
percentual de acerto do aluno na prova (int) e a sua nota (float), considerando que cada 
questão vale 1,5 ponto. Escreva os resultados retornados pela função. 
Opção 6: Escreva a mensagem “Fim de Programa” e encerre o algoritmo. */
#include <iostream>
using namespace std;

struct avaliacao{
    int acerto = 0;
    float nota = 0;
};

struct data{
    int dia, mes, ano;
};

struct ordem{
    int v1, v2, v3;
    char ordem;
};

void verdata(data *v, int i, bool *verifica);
ordem deixaremordem(ordem regOrdem);
avaliacao acerto (char prova[10][2], avaliacao gabarito);
float pensao (float salario, int filhos);
void multa (int velmax, int velmot, bool *infracao, float *valormulta);

    int main(){
        avaliacao gabarito, novogab;
        ordem regOrdem, nova;
        data v[5];
        bool verifica[5], infracao = false;
        int opcao, i, j, filhos, velmax, velmot; 
        char prova[10][2];
        float salario, valormulta;  
        do{
        cout << "\n-------------------------------------------------------\n";
        cout << "MENU PRINCIPAL\n";
        cout << "1 - ORDEM \n";
        cout << "2 - DATA \n";
        cout << "3 - SALARIO \n";
        cout << "4 - MULTA \n";
        cout << "5 - CALCULAR \n";
        cout << "6 - SAIR \n";
        cout << "-------------------------------------------------------\n";
        cin >> opcao;
        switch (opcao){
            case 1:
            cout << "Digite tres valores inteiros: \n";
            cin >> regOrdem.v1 >> regOrdem.v2 >> regOrdem.v3;
            cout << "Digite 'c' para ordem crescente ou 'd' para decrescente: \n";
            cin >> regOrdem.ordem;
            nova = deixaremordem(regOrdem);
            cout << nova.v1 << " " << nova.v2 << " " << nova.v3;
            break;
            case 2:
            for (i=0;i<5;i++){
            cout << "Digite o dia, mes e ano do registro " << i << "\n";
            cin >> v[i].dia >> v[i].mes >> v[i].ano;
            }
            verdata(v, i, verifica);
            for (i=0;i<5;i++){
                if (verifica[i] == true){
                    cout << "Data valida - " << v[i].dia << "/" << v[i].mes << "/" << v[i].ano << "\n";
                }else{
                    cout << "Data invalida - " << v[i].dia << "/" << v[i].mes << "/" << v[i].ano << "\n";
                }
            } 
            break;
            case 3:
            cout << "Digite o salario: \n";
            cin >> salario;
            cout << "Digite a quantidade de filhos: \n";
            cin >> filhos;
            if (filhos == 0){
                cout << "O seu salário será total para o seu próprio custeio.\n";
            }else{
            cout << "O valor por filho sera de : " << pensao (salario, filhos);
            }
            break;
            case 4:
            cout << "Digite a velocidade maxima permitida da via: \n";
            cin >> velmax;
            cout << "Digite a velocidade que o motorista esta dirigindo: \n";
            cin >> velmot;
            multa (velmax, velmot, &infracao, &valormulta);
            if (infracao == false){
                cout << "O motorista nao estava acima da velocidade.\n";
            }else{
                cout << "O motorista estava " << (velmot-velmax) << " km/h acima da velocidade, e sua multa foi de " << valormulta << " reais."; 
            }
            break;
            case 5:
            cout << "Digite o gabarito da prova:\n";
            for (i=0;i<2;i++){
                if (i==1){
                cout << "Agora digite o gabarito da prova do aluno:\n";
                }
                for (j=0;j<10;j++){
                    cin >> prova[j][i];
                }
            }
            novogab = acerto(prova, gabarito);
            cout << "O aluno acertou: " << novogab.acerto << " questoes.\n";
            cout << "A nota do aluno foi: " << novogab.nota << "\n";
            break;
            case 6:
            cout << "Fim de Programa.\n";
            break;
            default:
            cout << "Opcao invalida.";
            break;
        }
        }while(opcao!=6);
        return 0;
    }

    ordem deixaremordem(ordem regOrdem) {
    int temp;

    if (regOrdem.v1 > regOrdem.v2) {
        temp = regOrdem.v1;
        regOrdem.v1 = regOrdem.v2;
        regOrdem.v2 = temp;
    }
    if (regOrdem.v1 > regOrdem.v3) {
        temp = regOrdem.v1;
        regOrdem.v1 = regOrdem.v3;
        regOrdem.v3 = temp;
    }
    if (regOrdem.v2 > regOrdem.v3) {
        temp = regOrdem.v2;
        regOrdem.v2 = regOrdem.v3;
        regOrdem.v3 = temp;
    }

    if (regOrdem.ordem == 'd') {
        temp = regOrdem.v1;
        regOrdem.v1 = regOrdem.v3;
        regOrdem.v3 = temp;
        
        temp = regOrdem.v2;
        regOrdem.v2 = regOrdem.v2;
    }

    return regOrdem;
    }

    void verdata(data *v, int i, bool *verifica){
        for (i=0;i<5;i++){
            verifica[i] = true;
            if ((v[i].dia == 29) && (v[i].mes == 1)) {
                verifica[i] = true;
            }
            if ((v[i].dia>31) || (v[i].dia<1) || (v[i].mes>12) || (v[i].mes<1) || (v[i].ano<0)){
                verifica[i] = false;
            }else if ((v[i].dia == 31) && ((v[i].mes == 2) || (v[i].mes == 4) || (v[i].mes == 6)||(v[i].mes == 9)||(v[i].mes == 11))){
                verifica[i] = false;
            }else if ((v[i].dia == 30) && ((v[i].mes == 1) || (v[i].mes == 3) || (v[i].mes == 5)||(v[i].mes == 6)||(v[i].mes == 7)||(v[i].mes == 8)|| (v[i].mes == 10)|| (v[i].mes == 12))){
                verifica[i] = false;
            }
        }
    }

    float pensao (float salario, int filhos){
        if (filhos > 5){
                salario = (salario/2)/filhos;
            }else{
                salario = ((filhos*0.1)*(salario))/filhos;
            }
            return salario;
    }

    void multa (int velmax, int velmot, bool *infracao, float *valormulta){
                if (velmot>velmax){
                    *infracao = true;
                    if ((velmot-velmax) <= 10){
                        *valormulta = 50;
                    }else if ((velmot-velmax) <= 30){
                        *valormulta = 100;
                    }else{
                        *valormulta = 200;
                    }
                }
            }

    avaliacao acerto (char prova[10][2], avaliacao gabarito){
        int i;
                for (i=0;i<10;i++){
                    if(prova[i][0] == prova[i][1]){
                        gabarito.acerto++;
                        gabarito.nota += 1.5;
                    }
                }
                return gabarito;
            }