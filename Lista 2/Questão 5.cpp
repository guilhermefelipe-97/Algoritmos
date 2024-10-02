#include <iostream>
using namespace std;

int main()
{
    int cod;
	float salario,novo;
	
    cout <<"CODIGO\t\tCARGO\n";
    cout <<"101\t\tGerente\n";
    cout <<"102\t\tEngenheiro\n";
    cout <<"103\t\tTecnico\n";
    cout << "Insira o seu Salario e o Codigo: ";
    cin >> salario >> cod;
    if (cod == 101){
        novo = (salario * 1.1) ;
        cout << "O novo salario e de: " << novo << " reais.\n";
        cout << "O salario antigo e de: " << salario << " reais.\n";
        cout << "A diferenca e de: " << (novo - salario) << " reais.\n";
        }else{
        if (cod == 102){
        	novo = (salario * 1.2);
        	cout << "O novo salario e de: " << novo << " reais.";
        	cout << "O salario antigo e de: " << salario << " reais.\n";
        	cout << "A diferenca e de: " << (novo - salario) << " reais.\n";
        	}else{
        	if (cod == 103){
        		novo = (salario * 1.3);
        		cout << "O novo salario e de: " << novo << " reais.";
        		cout << "O salario antigo e de: " << salario << " reais.\n";
        		cout << "A diferenca e de: " << (novo - salario) << " reais.\n";
        		}else{
        			novo = (salario * 1.4);
        			cout << "O novo salario e de: " << novo << " reais.";
        			cout << "O salario antigo e de: " << salario << " reais.\n";
        			cout << "A diferenca e de: " << (novo - salario) << " reais.\n";
				
                }
            }
        }
                
    return 0;
}
