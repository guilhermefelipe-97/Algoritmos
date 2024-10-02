#include <iostream>
using namespace std;

int main()
{
	int nivel, horas;
    float salario;
	
	cout << "Bem vindo a escola Aprender\n";
    cout << "Insira se voce e do nivel 1, 2 ou 3 e quantas horas aula voce da por dia: ";
    cin >> nivel >> horas;
    if (nivel == 1){
        salario = (12 * horas) * 30;
        cout << "O salario mensal e de: " << salario << " reais.\n";
        cout << "O salario por dia e de: " << (salario/30) << " reais.\n";
        }else{
        if (nivel == 2){
        	salario = (17 * horas) * 30;
        	cout << "O salario mensal e de: " << salario << " reais.\n";
        	cout << "O salario por dia e de: " << (salario/30) << " reais.\n";
        	}else{
        	if (nivel == 3){
        		salario = (25 * horas) * 30;
        		cout << "O salario mensal 	e de: " << salario << " reais.\n";
        		cout << "O salario por dia e de: " << (salario/30) << " reais.\n";
        		}else{
        			cout << "Nivel incorreto";
				
                }
            }
        }
                
    return 0;
}
