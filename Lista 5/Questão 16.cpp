/*16. Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string, verifique e escreva se 
a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”*/
#include<iostream>
#include<string.h>
using namespace std;
    int main(){
        int i,j, cont = 0, cont2 = 0, existe = 0;
        bool busca = false;
        string entrada, palavra;
        cout << "Digite uma frase:\n";
        getline(cin,entrada);
        cout << "Digite a palavra para buscar:\n";
        getline(cin,palavra);
        do{
            cont++;
        }while(entrada[cont]!='\0');
        do{
            cont2++;
        }while(palavra[cont2]!='\0');
        for (i=0;i<cont;i++){
        if (entrada[i]==palavra[0]){
            for (j=0;j<cont2;j++){
                if (entrada[i]==palavra[j]){
                    existe++;
                    i++;
                }
            }
            if (existe==cont2){
                busca = true;
                }else{
                    existe = 0;
                }    
        }
        }
        if (busca == true){
            cout << "A palavra "<< palavra << " esta contida na frase.";
        }else{
            cout << "A palavra " << palavra << " nao esta contida na frase.";    
        }
    }