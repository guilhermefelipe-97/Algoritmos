/*10. Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva 
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada 
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a 
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número 
negativo, solicitar que o usuário digite novamente até que o número seja positivo. */
#include <iostream>
using namespace std;
    int main(){
        int a, b, c, d;
        do{
            do{
            cout << "Digite 4 valores positivos:" << " ";
            cin >> a >> b >> c >> d;
            }while ((a<0)||(b<0)||(c<0)||(d<0));
        if ((a!=0)||(b!=0)||(c!=0)||(d!=0)){
        cout << a << " | " << b << " | " << c << " | "  << d << " | " << endl;
        cout << "----------------------" << endl;
        cout << a*a << " | " << b*b << " | " << c*c << " | " << d*d << " | " << endl;
        cout << "----------------------" << endl;
        cout << a*a*a << " | " << b*b*b << " | " << c*c*c << " | " << d*d*d << " | " << endl;
        cout << "----------------------" << endl;
        }
        }while((a!=0)||(b!=0)||(c!=0)||(d!=0)); 
    }