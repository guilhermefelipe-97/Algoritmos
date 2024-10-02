/*14. Elabore um algoritmo que realize o controle dos veículos em um estacionamento a partir de 
um vetor de tVeículos (placa, modelo, data, hora de entrada, hora de saída e valor) e de um 
menu contendo as opções “Registrar entrada de veículo”, “Registrar saída de veículo”, “Listar 
veículos ativos no estacionamento”, “Informar quantidade de veículos por data”, “Informar 
total geral arrecadado” e “sair do sistema”. Considere que os campos “hora de entrada” e 
“hora de saída” armazenam somente a hora (sem minutos ou segundos). Considere que 
quando um veículo entra no estacionamento, a hora de saída é, obrigatoriamente, zerada. 
Considere ainda que o valor da hora no estacionamento custa 5 reais e que se o veículo entrar 
e sair na mesma hora não deverá efetuar pagamento. Finalmente, considere que o valor a 
ser pago deverá ser calculado pelo sistema a partir da hora de entrada e hora de saída.
*/
#include <iostream>
using namespace std;

    struct tVeiculos{
        int entrada, saida;
        string modelo, data, placa;
        float valor;
        bool ativo = true;
    };

    
    int main(){
        tVeiculos ficha[3];
        int opcao, qtd = 0, i ,total = 0, horasaida;
        string busca;

        bool flag = false;
        do{
        cout << "\n\t\tMENU\n";
        cout << "---------------------------------------------\n";
        cout << "1 - Registrar entrada do veiculo\n";
        cout << "2 - Registrar saida do veiculo\n";
        cout << "3 - Lista veiculos ativos no estacionamento\n";
        cout << "4 - Informar veiculos ativos por data\n";
        cout << "5 - Informar total geral arrecadado\n";
        cout << "6 - Sair do sistema\n";
        cout << "\nDigite a opcao:\n";
        cin >> opcao;
        switch (opcao){
            case 1:
            getchar();
            cout << "Digite a placa do veiculo:\n";
            getline(cin,ficha[qtd].placa);
            cout << "Digite a hora de entrada do veiculo:\n";
            cin >> ficha[qtd].entrada;
            ficha[qtd].saida = 0;
            getchar();
            cout << "Digite o modelo do veiculo:\n";
            getline(cin,ficha[qtd].modelo);
            cout << "Digite a data:\n";
            getline(cin,ficha[qtd].data);
            qtd++;
            break;
            case 2:
            getchar();
            cout << "Digite a placa do veiculo:\n";
            getline(cin,busca);
            for (i=0;i<qtd;i++){
                if (busca == ficha[i].placa){
                    flag = true;
                    ficha[i].ativo = false;
                    cout << "Digite a hora da saida:\n";
                    cin >> horasaida;
                    if (horasaida == ficha[i].entrada){
                        ficha[i].valor = 0;
                    }else{
                    ficha[i].valor = 5*(horasaida - ficha[i].entrada);
                    total+= ficha[i].valor;
                    }
                    
                }
            }
            if (flag == false){
                cout << "Veiculo nao encontrado.\n";
            }
            break;
            case 3:
            cout << "Veiculos ativos no estacionamento:\n";
            for (i=0;i<qtd;i++){
                if (ficha[i].ativo == true){
                cout << "\nPlaca: " << ficha[i].placa << endl;
                cout << "Modelo: " << ficha[i].modelo << endl;
                cout << "Data: " << ficha[i].data << endl;
                cout << "Horario de entrada: " << ficha[i].entrada << endl;
                }
            }
            break;
            case 4:
            getchar();
            cout << "Digite a data para buscar:\n";
            getline(cin,busca);
            for (i=0;i<qtd;i++){
                if ((ficha[i].data == busca) && (ficha[i].ativo == true)){
                    cout << "\nPlaca: " << ficha[i].placa << endl;
                    cout << "Modelo: " << ficha[i].modelo << endl;
                    cout << "Data: " << ficha[i].data << endl;
                    cout << "Horario de entrada: " << ficha[i].entrada << endl;  
                }
            }
            break;
            case 5:
            cout << "O total arrecadado foi de:\n";
            cout << total;
            break;
            case 6:
            cout << "Sistema finalizado.\n";
            break;
            default:
            cout << "Opcao invalida.\n";
            break;
        }
        }while (opcao!=6);
    }
