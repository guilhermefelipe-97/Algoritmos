 /*3)Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e a matriz. 
a) da linha 4 de M 
b) da coluna 2 de M 
c) da diagonal principal 
d) da diagonal secundária 
e) de todos os elementos da matriz M*/
#include <iostream>
using namespace std;
    int main(){
        int M[5][5],i,i2,somaL = 0, somaC = 0, somaDP = 0, somaDS = 0, somaT = 0, cont = 0;
        for(i=0;i<5;i++){
            for(i2=0;i2<5;i2++){
                cout << "Digite o elemento da linha " << i+1 << " na coluna " << i2+1 << " ";
                cin >> M[i][i2];
                somaT += M[i][i2];
                if (i == 3){
                    somaL += M[i][i2];
                }
                if (i2 == 1){
                    somaC += M[i][i2];
                }
                if ((i==0&&i2==0)||(i==1&&i2==1)||(i==2&&i2==2)||(i==3&&i2==3)||(i==4&&i2==4)){
                    somaDP += M[i][i2];
                }
                if ((i==4&&i2==0)||(i==3&&i2==1)||(i==2&&i2==2)||(i==1&&i2==3)||(i==0&&i2==4)){
                    somaDS += M[i][i2];
                }
            }
        }
        cout << "A matriz resultante e:\n";
        for(i=0;i<5;i++){
            for(i2=0;i2<5;i2++){
                cont++;
                cout << M[i][i2] << " ";
                if (cont%5==0){
                    cout << "\n";
                }
            }
        }
        cout << "\n";
        cout << "A soma dos elementos da linha 4 e: " << somaL<< "\n";
        cout << "A soma dos elementos da coluna 2 e: " << somaC << "\n";
        cout << "A soma dos elementos da diagonal principal e: " << somaDP<< "\n";
        cout << "A soma dos elementos da diagonal secundaria e: " << somaDS<< "\n";
        cout << "A soma dos elementos da matriz e " << somaT<< "\n";
    }