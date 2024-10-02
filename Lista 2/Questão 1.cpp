#include <iostream>
using namespace std;

int main()
{
    int x,y,z;
    cout << "Digite tres medidas de um triângulo:";
    cin >> x >> y >> z;
    if (x < (y + z) &&  y < (x + z) && z < (y + x)){
    } else {
    cout << "Nao e um triângulo";
        return 0; }

    if (x==y && y==z){
        cout << "O triangulo e equilatero";
        } else {
        if (x==y || y ==z || z==x){
            cout << "O triangulo e isósceles";
            } else {
            if (x!=y || y!=z || z!=x){
                cout << "o triangulo e escaleno";
                }
               }
              }
        
    return 0;
}
