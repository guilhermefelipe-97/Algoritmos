/*9. Implemente o jogo da velha usando uma matriz como tabuleiro*/
#include <iostream>
using namespace std;
    int main(){
        char M[3][3];
        int i,i2,i3,i4,i5,L,C;
        bool vitoria = false, jogador = false, repetir;
        //inicia matriz
        for (i=0;i<3;i++){
            for (i2=0;i2<3;i2++){
                M[i][i2] = '-';
            }
        }
        for (i=0;i<3;i++){
            for (i2=0;i2<3;i2++){
                do{
                if (jogador == false){
                    cout << "Jogador X digite a linha e a coluna:\n";
                }else{
                    cout << "Jogador O digite a linha e a coluna:\n";
                }
                cin >> L >> C;
                if ((jogador == false)&&(M[L][C] != 'O')){
                    M[L][C] = 'X';
                    repetir = false;
                }else if ((jogador == true)&&(M[L][C] != 'X')){
                    M[L][C] = 'O';
                    repetir = false;
                }else{
                    cout << "Jogada invalida.\n";
                    repetir = true;
                }
                }while(repetir);
                //digita matriz apos a jogada
                for (i3=0;i3<3;i3++){
                    for (i4=0;i4<3;i4++){
                    cout << M[i3][i4] << " ";
                    if (i4==2){
                            cout << "\n";
                        }
                    }
                }
                system("pause");
                system("cls");
                //verifica linha
                for (i5=0;i5<3;i5++){
                    if(((M[i5][0]=='O')&&(M[i5][1]=='O')&&(M[i5][2]=='O'))||((M[i5][0]=='X')&&(M[i5][1]=='X')&&(M[i5][2]=='X'))){
                        vitoria = true;
                    }
                }
                //verifica coluna
                for (i5=0;i5<3;i5++){
                    if(((M[0][i5]=='O')&&(M[1][i5]=='O')&&(M[2][i5]=='O'))||((M[0][i5]=='X')&&(M[1][i5]=='X')&&(M[2][i5]=='X'))){
                        vitoria = true;
                    }
                }
                    //verifica diagonal principal
                    if(((M[0][0]=='O')&&(M[1][1]=='O')&&(M[2][2]=='O'))||((M[0][0]=='X')&&(M[1][1]=='X')&&(M[2][2]=='X'))){
                        vitoria = true;
                    }
                    //verifica diagonal secundaria
                    if(((M[0][2]=='O')&&(M[1][1]=='O')&&(M[2][2]=='O'))||((M[0][2]=='X')&&(M[1][1]=='X')&&(M[2][2]=='X'))){
                        vitoria = true;
                    }
                    if (vitoria == true){
                        i = 4;
                        i2 = 4;
                        if (jogador == false){
                        cout << "Vitoria do Jogador X.\n";
                        }else{
                            cout << "Vitoria do Jogador O.\n";
                        }
                    }
                    jogador = !jogador;
            }
        }
        if (i==4){
         cout << "Empate.";  
        }
    }