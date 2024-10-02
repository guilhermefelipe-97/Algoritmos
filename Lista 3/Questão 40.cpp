/*Leia os votos de todos os eleitores considerando as opções de voto listadas no menu e, ao final da eleição, 
calcule e escreva o número total de votos, o número de votos por candidato, o total de votos brancos e 
o total de votos nulos. Informe ainda se houve vencedor (votos do candidato > 50% do total de votos) e, 
neste caso, o número do candidato que venceu*/
#include <iostream>
using namespace std;

int main(){
    int opcao, votoscandidato1 = 0, votoscandidato2 = 0, votoscandidato3 = 0, votosbrancos = 0, votosnulos = 0, votostotais =0;
    do{
cout << "-----------------------------\n";
cout << "MENU ELEICAO\n"; 
cout << "-----------------------------\n";
cout << "0-Finalizar Votacao \n";
cout << "1-Candidato 1 \n";
cout << "2-Candidato 2\n"; 
cout << "3-Candidato 3 \n";
cout << "4-Voto em branco \n";
cout << "5-Voto nulo\n";
cout << "-----------------------------\n";
cout << "Digite a opcao:\n";
cin >> opcao;
    switch (opcao){
        case 1:
        votoscandidato1 += 1;
        votostotais += 1; 
        break;
        case 2:
        votoscandidato2 += 1;
        votostotais += 1; 
        break;
        case 3:
        votoscandidato3 += 1;
        votostotais += 1; 
        break;
        case 4:
        votosbrancos += 1;
        votostotais += 1; 
        break;
        case 5:
        votosnulos += 1;
        votostotais += 1; 
        break;
    }
    system ("cls");
    }while (opcao !=0);
    cout << "O total de votos foi " << votostotais << "\n";
    cout << "O Candidato 1 teve " << votoscandidato1 << " votos\n";
    cout << "O Candidato 2 teve " << votoscandidato2 << " votos\n";
    cout << "O Candidato 3 teve " << votoscandidato3 << " votos\n";
    cout << "Votos brancos totalizaram " << votosbrancos << "\n";
    cout << "Votos nulos totalizaram " << votosnulos << "\n";
    if (votoscandidato1>(votostotais/2)){
        cout << "O Candidato 1 venceu a eleicao.\n";
    }else if (votoscandidato2>(votostotais/2)){
        cout << "O Candidato 2 venceu a eleicao.\n";
    }else if (votoscandidato3>(votostotais/2)){
        cout << "O Candidato 3 venceu a eleicao.\n";
    }else{
        cout << "Nao houveram vencedores.";
    }
}