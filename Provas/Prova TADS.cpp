#include <iostream>
using namespace std;

int main (){
    int matricula, senha, novasenha = 1111, op, op2, qtd = 0, cont, decremento = 0, decrementototal = 0, cargatotal = 0, cargatotal1 = 0, cargatotal2 = 0, cargatotal3 = 0, cargatotal4 = 0, cargatotal5 = 0, totalexercicio = 0, sessao = 0, maiordecremento = 0, qtddecremento = 0, menorqtddecremento = 100, matriculamenor = 0;
    float carga, carga1, carga2, carga3, carga4, carga5;
    char tipo;
    bool flag = false;
    
    do{
    do{
    cout << "Bem-vindo a Academia EuMalhoAsVezes.com\n";
    cout << "Digite o usuario (sendo C ou c para Cliente e A ou a para Administrador), a sua matricula e a senha: \n";
    cin >> tipo >> matricula >> senha;
    if (((tipo!='C'&&tipo!='c'&&tipo!='A'&&tipo!='a')||(senha!=novasenha || (senha<1000||senha>9999)))){
        cout << "Informacoes invalidas, sessao nao iniciada.\n";
    }
    }while((tipo!='C'&&tipo!='c'&&tipo!='A'&&tipo!='a')||(senha!=novasenha || (senha<1000||senha>9999)));
    cout << "Sessao iniciada com sucesso.\n";
    qtddecremento = 0;

    if (tipo == 'C'|| tipo == 'c'){
        sessao++;
        cargatotal1 = cargatotal2 = cargatotal3 = cargatotal4 = cargatotal5 = 0;
        do{
        cout << "Menu Cliente\n";
        cout << "--------------------------\n";
        cout << "1- Exercicios por Alvo.\n";
        cout << "2- Informar Carga Atual\n";
        cout << "3- Logoff do Cliente\n";
        cout << "--------------------------\n";
        cout << "Digite a opcao:\n";
        cin >> op;
        switch (op){
            case 1:
            cout << "Digite a quantidade de exercicios para realizar:\n";
            cin >> qtd;
            totalexercicio += qtd;
            for (cont = 1; cont <= qtd; cont++){
                cout << "Alvos\n";
                cout << "1- Inferiores\n";
                cout << "2- Superiores\n";
                cout << "3- Abdomen\n";
                cout << "4- Costas\n";
                cout << "5- Outros\n";
                cout << "Digite a opcao\n";
                cin >> op2;
                if (cont > 1){
                    decremento = carga;
                }
                switch (op2){
                    case 1:
                    cout << "Digite a carga em kg\n";
                    cin >> carga1;
                    carga = carga1;
                    cargatotal1 += carga1;
                    break;
                    case 2:
                    cout << "Digite a carga em kg\n";
                    cin >> carga2;
                    carga = carga2;
                    cargatotal2 += carga2;
                    break;
                    case 3:
                    cout << "Digite a carga em kg\n";
                    cin >> carga3;
                    carga = carga3;
                    cargatotal3 += carga3;
                    break;
                    case 4:
                    flag = true;
                    cout << "Digite a carga em kg\n";
                    cin >> carga4;
                    carga = carga4;
                    cargatotal4 += carga4;
                    break;
                    case 5:
                    cout << "Digite a carga em kg\n";
                    cin >> carga5;
                    carga = carga5;
                    cargatotal5 += carga5;
                    break;
                }
                if (carga<decremento){
                    qtddecremento++;
                    decremento = decremento - carga;
                    decrementototal += decremento;
                    if (decremento>maiordecremento){
                        maiordecremento = decremento;
                    }
                }
                cargatotal += carga;
            }
            break;
            case 2:
            cout << "A carga total foi de: " << cargatotal << "\n";
            break;
            case 3:
            cout << "A carga total em inferiores foi de: " << cargatotal1 << " kg\n";
            cout << "A carga total em superiores foi de: " << cargatotal2 << " kg\n";
            cout << "A carga total em abdomen foi de: " << cargatotal3 << " kg\n";
            cout << "A carga total em costas foi de: " << cargatotal4 << " kg\n";
            cout << "A carga total em outros foi de: " << cargatotal5 << " kg\n";
            break;
        }
        if (qtddecremento<menorqtddecremento){
            matriculamenor = matricula;
        }
        menorqtddecremento = qtddecremento;
        }while(op!=3);
    }else{
        do{
        cout << "Menu Administrador\n";
        cout << "--------------------------\n";
        cout << "1- Analise de exercicios\n";
        cout << "2- Maiores decrementos\n";
        cout << "3- Alterar senha\n";
        cout << "4- Fazer logoff\n";
        cout << "5- Finalizar o Sistema\n";
        cout << "--------------------------\n\n";
        cout << "Digite a opcao:\n";
        cin >> op;
        switch (op){
            case 1:
            cout << "A media aritmetica da quantidade de exercicios por sessao foi de: " << (totalexercicio/sessao) << "\n" ;
            break;
            case 2:
            cout << "O maior valor de decremento de carga foi de " << maiordecremento << " kg.\n";
            cout << "A matricula do cliente com menor quantidade de decrementos e: " << matriculamenor << "\n";
            break;
            case 3:
            do{
            cout << "Digite a nova senha com quatro digitos e que nao comece com zero: \n";
            cin >> senha;
            if ((senha<1000||senha>9999)){
                cout << "Senha nao alterada.\n";
            }
            }while((senha<1000||senha>9999));
            novasenha = senha;
            cout << "Senha alterada com sucesso.\n";
            break;
            case 4:
            if (flag == false){
                cout << "Nenhum cliente fez exercicio de alvo costas.\n";    
            }else{
                cout << "Foi realizado o exercicio de alvo costas por um cliente.\n";
            }
            break;
            case 5:
            break;
        }
    }while(op!=4);
    }
    }while(op!=5);
}