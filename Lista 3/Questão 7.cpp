/*Elabore um algoritmo que implemente uma calculadora real: o usuário digita um número, depois a 
operação (+, -, *, /), outro número, outra operação, outro número, e assim continua até que ele digite 
enfim o sinal “=”, quando então a calculadora mostra o resultado. Exemplos: 1 + 3 – 2 / 2 = 1; 4 – 2 / 1 + 
4 = 6. O algoritmo deve resolver a expressão na ordem de digitação.*/
#include <iostream>
using namespace std;

int main(){
    int numero , resultado = 0;
    char operacao;
    cout << "Calculadora\n";
    cout << "Digite o numero\n";
    cin >> numero;
    resultado = numero;
    cout << "Digite a operacao\n";
    cin >> operacao;
    if (operacao != '='){
    do{
    cout << "Digite o numero\n";
    cin >> numero;
    switch (operacao){
        case '+' :
        resultado = resultado + numero;
        break;
        case '-' :
        resultado = resultado - numero;
        break;
        case '*' :
        resultado = resultado * numero;
        break;
        case '/' :
        resultado = resultado / numero;
        break;
    }
    cout << "Digite a operacao\n";
    cin >> operacao;
    }while (operacao != '=');
    cout << "O resultado e " << resultado << "\n"; 
    }else{
    cout << "O resultado e " << resultado << "\n"; 
    }
}