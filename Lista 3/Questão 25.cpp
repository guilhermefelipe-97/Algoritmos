#include <iostream>
using namespace std;

int main (){
/*25. Elabore um algoritmo que leia o gabarito correto de uma prova com 10 questões e os gabaritos de 
respostas de N alunos de uma turma. Calcule e mostre o número de erros e acertos de cada aluno e a 
média de acertos da turma. Considere como respostas possíveis para cada questão as alternativas ‘a’, ‘b’, 
‘c’ e ‘d’.*/
float media = 0;
int acertos, erros, alunos = 0, auxiliar = 0;
char a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, resposta;
do{
cout << "Digite o gabarito da prova de 10 questoes: (a,b,c,d) " << endl;
cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
if (((a!='a')&&(a!='b')&&(a!='c')&&(a!='d')) || 
((b!='a')&&(b!='b') && (b!='c') && (b!='d')) || 
((c!='a') && (c!='b') && (c!='c') &&(c!='d')) || 
((d!='a') && (d!='b') && (d!='c') && (d!='d')) ||
((e!='a') && (e!='b') && (e!='c') && (e!='d')) || 
((f!='a') && (f!='b') && (f!='c') && (f!='d')) || 
((g!='a') && (g!='b') && (g!='c') && (g!='d')) || 
((h!='a') &&(h!='b') && (h!='c') && (h!='d')) || 
((i!='a') &&(i!='b') && (i!='c') && (i!='d')) || 
((j!='a') && (j!='b') && (j!='c') && (j!='d'))){
    cout << "Letras incorretas, digite novamente." << endl;
}
}while (((a!='a')&&(a!='b')&&(a!='c')&&(a!='d')) || 
((b!='a')&&(b!='b') && (b!='c') && (b!='d')) || 
((c!='a') && (c!='b') && (c!='c') &&(c!='d')) || 
((d!='a') && (d!='b') && (d!='c') && (d!='d')) ||
((e!='a') && (e!='b') && (e!='c') && (e!='d')) || 
((f!='a') && (f!='b') && (f!='c') && (f!='d')) || 
((g!='a') && (g!='b') && (g!='c') && (g!='d')) || 
((h!='a') &&(h!='b') && (h!='c') && (h!='d')) || 
((i!='a') &&(i!='b') && (i!='c') && (i!='d')) || 
((j!='a') && (j!='b') && (j!='c') && (j!='d')));
do{
acertos = 0;
erros = 0;
do{
cout << "Digite o gabarito da prova do aluno: (a,b,c,d) " << endl;
cin >> k >> l >> m >> n >> o >> p >> q >> r >> s >> t;
if (((k!='a')&&(k!='b')&&(k!='c')&&(k!='d')) || 
((l!='a')&&(l!='b') && (l!='c') && (l!='d')) || 
((m!='a') && (m!='b') && (m!='c') &&(m!='d')) || 
((n!='a') && (n!='b') && (n!='c') && (n!='d')) ||
((o!='a') && (o!='b') && (o!='c') && (o!='d')) || 
((p!='a') && (p!='b') && (p!='c') && (p!='d')) || 
((q!='a') && (q!='b') && (q!='c') && (q!='d')) || 
((r!='a') &&(r!='b') && (r!='c') && (r!='d')) || 
((s!='a') &&(s!='b') && (s!='c') && (s!='d')) || 
((t!='a') && (t!='b') && (t!='c') && (t!='d'))){
    cout << "Letras incorretas, digite novamente." << endl;
}
}while (((k!='a')&&(k!='b')&&(k!='c')&&(k!='d')) || 
((l!='a')&&(l!='b') && (l!='c') && (l!='d')) || 
((m!='a') && (m!='b') && (m!='c') &&(m!='d')) || 
((n!='a') && (n!='b') && (n!='c') && (n!='d')) ||
((o!='a') && (o!='b') && (o!='c') && (o!='d')) || 
((p!='a') && (p!='b') && (p!='c') && (p!='d')) || 
((q!='a') && (q!='b') && (q!='c') && (q!='d')) || 
((r!='a') &&(r!='b') && (r!='c') && (r!='d')) || 
((s!='a') &&(s!='b') && (s!='c') && (s!='d')) || 
((t!='a') && (t!='b') && (t!='c') && (t!='d')));
if (k == a){
acertos++;
}else{
erros++;
}   if (l == b) {
    acertos++;
    }else{
    erros++;
    }   if (m == c){
        acertos++;
        }else{
         erros++;
        }   if (n == d) {
            acertos++;
            }else{
            erros++;
            }   if (o == e){
                acertos++;    
                }else{
                erros++;
                }   if (p == f) {
                    acertos++;
                    }else{
                    erros++;
                    }   if (q == g){
                        acertos++;
                        }else{
                        erros++;
                        }   if (r == h) {
                            acertos++;
                            }else{
                            erros++;
                            }   if (s == i){
                                acertos++;
                                }else{
                                erros++;
                                }   if (t == j){
                                    acertos++;
                                    }else{
                                    erros++;
                                    }
cout << "Este aluno teve: " << acertos << " acertos." << endl;
cout << "Este aluno teve: " << erros << " erros." << endl;
cout << "Ainda tem alunos para cadastrar? (s/n)" << endl;
cin >> resposta;
alunos++;
auxiliar += acertos;
}while (resposta == 's');
media = (auxiliar/alunos);
cout << "A media de acertos da turma foi de: " << media << endl;
}