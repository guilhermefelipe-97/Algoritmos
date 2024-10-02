#include <iostream>
using namespace std;

int main()
{
    float alt,peso;
    char g;
    cout << "Digite altura e genero (m ou f): ";
    cin >> alt >> g;
    if (g =='m'){
        peso = (72.7*alt)-58;
        cout << peso << "kg";
                }else{
                if (g =='f'){ 
                peso = (62.1*alt)-44.7;
                cout << peso << " kg";
                    }else{
                    cout << "Genero invalido";
                    }    
                }
    return 0;
}
