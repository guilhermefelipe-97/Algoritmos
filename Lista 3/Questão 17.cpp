/*17. Elabore um algoritmo que simule o caixa de um supermercado. Para cada produto da compra, o 
algoritmo deve ler o seu código, o valor unitário e a quantidade adquirida. Após as informações do 
produto, o algoritmo deve mostrar o subtotal da compra e perguntar se o usuário deseja continuar (S-sim, N-não). 
Caso o usuário escolha ‘S’, o algoritmo deverá pedir os dados do próximo produto. 
Caso escolha ‘N’, o algoritmo deverá informar o total da compra e a quantidade total de produtos adquiridos. 
Em seguida deve ler o valor pago e informar se está correto, existe troco ou está insuficiente.*/
#include <iostream>
using namespace std;

    int main(){
        int codigo, quantidade;
        float valor, subtotal, pago, total = 0, troco;
        char resposta;

            cout << "Bem vindo ao Nordestino Supermercado!\n";
        do{            
            cout << "Digite o codigo do produto:\n";
            cin >> codigo;
            cout << "Digite o valor unitario:\n";
            cin >> valor;
            cout << "Digite a quantidade:\n";
            cin >> quantidade;
            subtotal = valor * quantidade;
            total += subtotal;
            cout << "O subtotal e de: " << subtotal << " reais.\n";
            cout << "Deseja continuar?\n";
            cin >> resposta;
            system ("cls");
        }while(resposta=='S');
        do{
        cout << "O total da compra foi de " << total << " reais.\n";
        cout << "Informe o valor pago:\n";
        cin >> pago;
        if (pago<1){
            cout << "O valor esta incorreto.\n";
        }
        }while(pago<1);
        troco = pago - total;
        if (pago>total){
            cout << "O troco foi " << troco << " reais. Obrigado pela compra.\n";
        }else{
            cout << "O valor e insuficiente.\n";
        }
        system ("pause");
    }