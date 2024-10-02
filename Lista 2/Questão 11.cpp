#include <iostream>
using namespace std;

int main(){
    
    int a, soma;
    cout << "Digite um numero:\n";
    cin >> a;
    if (a<100){
        soma = (a/10) + (a%10);
    }else{
        if(a<1000){
            soma = (a/100) + ((a%100)/10) + (a%100)%10;
        }else{
            if(a<10000){
                soma = (a/1000) + ((a%1000)/100) + (((a%1000)%100)/10) + (((a%1000)%100)%10);
            }else{
                if(a<100000){
                    soma = (a/10000) + ((a%10000)/1000) + (((a%10000)%1000)/100) + (((a%10000)%1000)%100)/10 + (((a%10000)%1000)%100)%10;
                }
            }
        }
    }
    cout << "A soma e: " << soma; 
    return 0;
}