/*14. Escreva uma função que receba uma string e uma letra e retorne um vetor de 
inteiros contendo as posições (índices no vetor da string) onde a letra foi encontrada e 
um inteiro contendo o tamanho do vetor criado (total de letras iguais encontradas). 
Utilize o retorno de um vetor para retornar os índices e um ponteiro para guardar o 
tamanho do vetor. Elabore um algoritmo que teste a função supracitada.*/

#include <iostream>
using namespace std;
void buscar(string *nome,char busca,int j);

    int main(){
        int i = 0, j, contador = 0;
        string nome;
        cout << "Digite uma palavra:\n";
        getline(cin,nome);
        //Conta quantas letras tem
        do{
            i++;
        }while(nome[i]!='\0');
        j = i;
        char busca;
        cout << "Digite a letra para procurar:\n";
        cin >> busca;
        buscar(&nome,busca,j);
        for(i=0;i<j;i++){
            if (nome[i]!='1'){
                contador++;
                cout << "Posicao: " << i << endl;
            }
        }
        cout << "Foram encontradas " << contador << " letras iguais.";
    }

    void buscar(string *nome,char busca,int j){
        int i;
        for(i=0;i<j;i++){
            if ((*nome)[i]!=busca){
                (*nome)[i]='1';   
            }
        }
    }