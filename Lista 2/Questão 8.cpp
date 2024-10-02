#include <iostream>
using namespace std;

int main() {
    int num,soma,aux;
    char x;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    cout << "Digite 'a' para antecessores ou 's' para sucessores: ";
    cin >> x;

    if (x == 's') {
    	for (int i = 1; i <= 10; i++) {
        soma = soma + (num+1);
        num++;
		}
		cout << "A soma dos valores e: " << soma;
    } else {
    	if (x == 'a') {
    		for (int i = 1; i <= 10; i++) {
        	soma = soma + (num-1);
        	num--;
			}
    		cout << "A soma dos valores e: " << soma;
		} else {
			cout << "Digito Incorreto";
		}
	}
	return 0;
}
		
