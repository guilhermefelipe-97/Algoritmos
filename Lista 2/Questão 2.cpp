#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    if (num%2==0){
        cout << "O numero e par e ";
        if (num>100){
        cout << "Maior que 100";
        }else{ 
        cout << "Menor que 100";
        }
        }else{
        cout << "O numero e Impar e ";
        if (num > 0){
        cout << "positivo";
        }else{ 
        cout << "negativo";
        }
       }
        
    return 0;
}
