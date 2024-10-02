#include <iostream>
using namespace std;

int main() {
    int cod, codMaisvelha, idade, idadeMaisnova = 200, idadeMaisvelha = 0, cont;
    for(cont = 1; cont <=3; cont++){
        cout << "Digite o codigo e a idade da pessoa: ";
        cin >> cod >> idade;
        if(idade > idadeMaisvelha){
            idadeMaisvelha = idade;
            codMaisvelha = cod;
        }else{
            if(idade < idadeMaisnova){
                idadeMaisnova = idade;
            }
        }
    }
    cout << "O codigo da pessoa mais velha e: " << codMaisvelha << "\n";
    cout << "A pessoa mais nova tem: " << idadeMaisnova << " anos.";
}