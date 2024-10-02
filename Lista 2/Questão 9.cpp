#include <iostream>
using namespace std;

int main()
{
    int a,b,c,maior,meio,menor;
    char x;
    cout<<"Digite tres numero e uma letra, c ou d para crescente ou decrescente, para coloca-los em ordem:\n ";
    cin >> a >> b >> c >> x;
 
    if (a>b && b>c){
        maior = a;
        meio = b;
        menor = c;
    }else{ 
        if (a>c && c>b){
            maior = a;
            meio = c;
            menor = b;
        }else{
            if (b>a && a>c){
              maior = b;
              meio = a;
              menor = c;
            }else{
                if (b>c && c>a){
                    maior = b;
                    meio = c;
                    menor = a;
                }else{
                    if (c>a && a>b){
                        maior = c;
                        meio = a;
                        menor = b;
                    }else{
                        if(c>b && b>a){
                            maior = c;
                            meio = b;
                            menor = a;
                        }
                    }
                }
            }
        }
    }
    if (x == 'c'){
        cout << menor <<"\t" << meio <<"\t" << maior;
    }else{
        if (x =='d'){
            cout << maior <<"\t" << meio <<"\t" << menor;
        }
    }
}