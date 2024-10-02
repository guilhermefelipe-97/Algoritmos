#include <iostream>
using namespace std;

int main(){
    int A, B, C = 0, cont, aux, somapar = 0, somaimpar =0;
    cout << " Digite dois numeros inteiros:\n";
    cin >> A >> B;
    if (A>B){
        C = A;
        A = B;
        B = C;
    }
    for (cont = A; cont<=B; cont++){
        if (cont%2==0){
        somapar += cont;
        }else{
            for(aux = cont; aux >= A; aux--){
                if ( cont%aux ==0){
                    somaimpar += aux;
                }
            }
        }
    }
    cout << "A soma dos pares foi " << somapar << "\n";
    cout << "A soma dos impares foi " << somaimpar;
}