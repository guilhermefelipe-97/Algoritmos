#include <iostream>
using namespace std;

int main(){
    
    float media;
    int a, b, c;
    cout << "Digite a nota do trabalho de laboratorio, da avaliacao semestral e do exame final:\n";
    cin >> a >> b >> c;
    media = ((a*2) + (b*3) + (c*5)) / (float)10 ;
    cout << "A media e: " << media; 
}