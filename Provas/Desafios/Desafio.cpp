#include <iostream>
using namespace std;

int main (){ 
    int n1, n2,num, resultado, a;
    cout << "Digite o primeiro e o segundo numero para ser feita a tabuada: ";
    cin >> n1 >> n2;
    if (n1>n2){
        a = n1;
        n1 = n2;
        n2 = a;
    }
    while (n1<=n2){
    num = 1;
        while (num<=10){
        resultado = n1*num;
        cout << n1 << " x "<< num << " = " << resultado << "\n";
        num++;
        }
    cout << "\n";
    n1++;
    }
system ("pause");
}