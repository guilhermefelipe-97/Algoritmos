#include <iostream>
using namespace std;

int main(){
	int matricula , senha = 1111 , novaSenha , op, alvos,qtd,decre,i,opA,sessoes=0, TotalExerc,maior, menor = -1 , menorMat;
	char tipoUser;
	float carga, cargatotal, c1 , c2 , c3 , c4 , c5 , decremento, cargaAnt;
	bool inicio = true , cost = false;
	
	while (inicio){
	do{
		cout <<"\n\tBem vindo a Academia euMalhoAsVezes.com";
		cout <<"\n\tSelecione 'C' para cliente ou 'A' para Administrador: ";
		cin >> tipoUser;
		cout <<"\n\tDigite sua matricula: ";
		cin >> matricula;
		cout <<"\n\tDigite sua senha: ";
		cin >> senha;
		if((tipoUser!='C'&&tipoUser!='c'&&tipoUser!='A'&&tipoUser!='a')||(senha!=1111)){
			cout<<"\n\tInformacoes invalidas , sessao nao iniciada";
			system("pause");
		}else{
			cout<<"\n\tSessao iniciada com sucesso";
		}
		system("cls");
	}while((tipoUser!='C'&&tipoUser!='c'&&tipoUser!='A'&&tipoUser!='a')|| (senha!=1111));
	
		if(tipoUser == 'C' || tipoUser =='c'){
			sessoes++;
			c1 = c2 = c3 = c4 = c5 = 0;
			cargatotal = 0;
			decre = 0;
			do{
				decremento = 0;
				decre = 0;
				cout << "\n\tMENU CLIENTE";
				cout<<"\n\t------------------------------------";
				cout<<"\n\t1- Exercicios por alvo";
				cout<<"\n\t2 - Informar carga atual";
				cout <<"\n\t3 - Logoff do Cliente";
				cin >> op;
				switch (op){
					case 1:
						cout << "\n\tQual a quantidade de exercicio desejada: ";
						cin >> qtd ;
						TotalExerc += qtd;
						for(i=1 ; i<=qtd ; i++){
							cout << "\n\tAlvos";
							cout << "\n\t-------------";
							cout << "\n\t1-Inferiores";
							cout << "\n\t2-Superiores";
							cout << "\n\t3-Abdomen";
							cout << "\n\t4-Costas";
							cout << "\n\t5-Outros";
							cout << "\n\t-------------";
							cin >> alvos;
							cout << "\n\tQual a carga em kg para o alvo: ";
							cargaAnt = carga;
							cin >> carga ;
							cargatotal+=carga;
								if(carga < cargaAnt){
								decremento = decremento + (carga - cargaAnt);
								decre ++;						
								}
								if((cargaAnt - carga)>maior){
									maior = (cargaAnt - carga);
								}
									if(alvos == 1){
										c1 += carga;
									}else{
										if(alvos ==2){
											c2 += carga;
										}else{
											if(alvos == 3){
												c3 += carga;
											}else{
												if (alvos == 4){
													c4 += carga;
													cost = true;
												}else{
													if(alvos == 5){
														c5 += carga;
													}
												}
											}
										}
									}
						}
					break;
					case 2:
						cout  <<"\n\tA carga total foi de : "<<cargatotal<<" Kg";
					break;
					case 3:
					cout<< "\n\tA carga total do alvo 1 foi: "<<c1 <<"\n\tA carga total do alvo 2 foi: "<<c2 <<"\n\tA carga total do alvo 3 foi: "<<c3<<"\n\tA carga total do alvo 4 foi : "<<c4 <<"\n\tA carga total do alvo 5 foi:"<<c5;
					if((decre < menor)||(menor ==-1)){
						menor = decre ;
						menorMat = matricula ;
					}
					break;
				}
			}while(op!=3 );
		}
		if(tipoUser=='A'|| tipoUser =='a'){
			do{
				cout << "\n\tMENU ADMIN";
				cout<<"\n\t------------------------------------";
				cout<<"\n\t1- Analise de exercicios";
				cout<<"\n\t2 - Maiores decrementos";
				cout <<"\n\t3 - Alterar senha";
				cout<<"\n\t4 - Finalizar o Sistema";
				cout<<"\n\t------------------------------------";
				cin >> opA ;
			switch (opA){
				case 1 :
					cout << " A media aritmetrica da quantidade de exercicios por sessao foi: "<< (TotalExerc/sessoes);
				break ;
				case 2 :
					cout << "\n\tO maior decremento foi: "<< maior <<"\n\tE a matricula do cliente com menor quantidade de decrementos: "<<menorMat;
				break;
				case 3 :
					do{
					cout<< "\n\tDigite sua nova senha: Inteiro com exatamento quatro algarismos que nao comece com zero: ";
					cin >> novaSenha;
					senha = novaSenha;
					}while(novaSenha > 9999 && novaSenha <1000);
				break;
				case 4 :
					if(cost == true){
						cout<< "Pelo meno um usuario treinou costas";
					}else{
						cout<<"Nenhum usuario treinou costas";
					}
					inicio = false;
			}	
			}while(opA!=4);
		}
	}
}
