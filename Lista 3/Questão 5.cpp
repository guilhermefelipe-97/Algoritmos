#include <iostream>
using namespace std;

int main(){
    int matricula, aprovado = 0, reprovado = 0, recuperacao = 0;
    float media;
    do{
    cout<<"Digite a matricula do aluno e a media: ";
    cin >> matricula >> media;
    if (media >=7){
        aprovado ++;
        if (media >9){
            cout << "O aluno " << matricula << " teve media superior a 9\n";
        }
    }else{
        if(media<3){
            reprovado ++;
        }else{
            if (media = 4){
                recuperacao ++;
            }
        }
    }
    }while(media>=0);
    cout << "O numero de aprovados foi: " << aprovado << "\n";
    cout << "O numero de reprovados foi: " << reprovado << "\n";
    cout << "O numero de alunos em recuperacao foi: " << recuperacao << "\n";
    

    return 0;
}