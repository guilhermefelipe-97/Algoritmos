#include <iostream>
using namespace std;

int main()
{
    int ano;
    float preco,total;
    cout << "Insira o ano e preco do veiculo ";
    cin >> ano >> preco;
    if (ano < 1990){
        total = preco * 0.01;
        cout << "O imposto sera de: " << total;
        }else{
        total = preco * 0.015;
        cout << "O imposto sera de: " << total;
                }
                
    return 0;
}
