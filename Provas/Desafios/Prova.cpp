#include <iostream>
using namespace std;

int main (){ 
    int opcao, B, E, cont, sucessor, total, posicao, rodada, pontosj1, pontosj2, jogadordavez;
    char a, b, c, d, e, f, g, h, letra;
    bool jogador, marcador;
    do{
        cout << "Menu Principal\n";
        cout << "----------------\n";
        cout << "1 - Calcular\n";
        cout << "2 - Sistema\n";
        cout << "3 - Sair\n";
        cout << "Escolha a opcao desejada:\n";
        cin >> opcao;
        switch (opcao){
            case 1:
            total = 1;
            do{
            cout << "Digite dois numeros inteiros positivos e nao nulos:\n";
            cin >> B >> E;
            if ((B<1)||(E<1)){
                cout << "Numero invalido. Digite novamente.\n";
            }
            }while ((B<1)||(E<1));
            sucessor = B;
            if (E!=1){
            total = B*B;
                for (cont = 2; cont <E; cont++){
                    total = total*B;
                }
                for (cont = sucessor; cont <= total; cont++){
                    if (cont % 7 == 0){
                        cout << "Numero " << cont << "\n";
                    }
                }
            }else{
                total = B;
            }
                if (total<7){
                cout << "Nao existem numeros de " << B << " a " << total << " que sao divisiveis por 7.\n";
                }else{
                cout << "Esses sao os numeros de " << B << " a " << total << " que sao divisiveis por 7.\n";
                system ("pause");
                system ("cls");
                }
            break;
            case 2:
            a = b = c = d = ' ';
            jogador = false;
            rodada = 1;
            pontosj1 = 0;
            pontosj2 = 0;
            cout << "Jogo Palavra Secreta\n";
            do{
            cout << "Moderador, digite a palavra secreta com 4 letras: \n";
            cin >> e >> f >> g >> h;
            if ((e == f)||(e == g)||(e == h)||(f == g)||(f == h)||(g == h)){
                    cout << "Nao pode conter ter letras iguais.\n";
            }
            }while((e == f)||(e == g)||(e == h)||(f == g)||(f == h)||(g == h));
            system ("cls");
            do{
                marcador = false;
                if (jogador == 0){
                    jogadordavez = 1;
                }else if (jogador == 1){
                        jogadordavez = 2;
                }
                do{
                cout << "Rodada " << rodada << "\n";
                cout << "Jogador "<< jogadordavez  << " escolha uma letra e uma posicao entre 1 a 4:";
                cin >> letra >> posicao;
                if ((posicao<1) || (posicao>4) || (letra == a) || (letra == b) || (letra == c) || (letra == d)){
                    cout << "Rodada invalida\n";
                    system ("pause");
                    system ("cls");
                }
                }while((posicao<1) || (posicao>4) || (letra == a) || (letra == b) || (letra == c) || (letra == d));
                if ((letra == e) && (posicao == 1)){
                    a = letra;
                    marcador = true;
                    cout << "Correto.\n\n";
                    if (jogador==0){
                        pontosj1++;
                    }else{
                        pontosj2++;
                    }
                }else if ((letra == f) && (posicao == 2)){
                    b = letra;
                    marcador = true;
                    cout << "Correto.\n\n";
                    if (jogador==0){
                        pontosj1++;
                    }else{
                        pontosj2++;
                    }
                }else if ((letra == g) && (posicao == 3)){
                    c = letra;
                    marcador = true;
                    cout << "Correto.\n\n";
                    if (jogador==0){
                        pontosj1++;
                    }else{
                        pontosj2++;
                    }
                }else if ((letra == h) && (posicao == 4)){
                    d = letra;
                    marcador = true;
                    cout << "Correto.\n\n";
                    if (jogador==0){
                        pontosj1++;
                    }else{
                        pontosj2++;
                    }
                }
                if (((letra == e) && (marcador == false))||((letra == f) && (marcador == false)) || ((letra == g) && (marcador == false)) || ((letra == h) && (marcador == false))){
                cout << "Letra correta na posicao errada.\n\n";
                }else if (marcador == false){
                    cout << "Errado.\n\n";
                }
                rodada++;
                
                system ("pause");
                system ("cls");
            jogador = !jogador;
            }while((rodada<=10) && ((a!=e)||(b!=f)||(c!=g)||(d!=h)));
            cout << "A palavra era: " << e << f << g << h << "\n";
            if (pontosj1>pontosj2){
                cout << "Jogador 1 venceu com " << pontosj1 << " acertos.\n\n";
            }else if(pontosj2>pontosj1){
                cout << "Jogador 2 venceu com " << pontosj2 << " acertos.\n\n";
            }else{
                cout << "Empate de " << pontosj1 << " acertos.\n";
            }
            system ("pause");
            system ("cls");
            break;
            case 3:
            cout << "Programa encerrado.";
            break;
            default:
            cout << "Opcao invalida.\n";
            system ("pause");
            system ("cls");
        }         
    }while(opcao!=3); 
}