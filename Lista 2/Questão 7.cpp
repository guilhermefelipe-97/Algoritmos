#include <iostream>
using namespace std;

int main() {
    int codSand, quantSand, codBeb, quantBeb;
    float preco;

    cout << "Bem vindo. Digite o codigo do seu lanche:\n\n";
    cout << "CODIGO\t"<< "Descricao\t"<< "\tPreco Unitario\n\n";
    cout << "100\t"<< "Cachorro Quente\t" <<"\t1,10\n";
    cout << "101\t"<< "Bauru simples\t" << "\t1,30\n";
    cout << "102\t"<< "Bauru com ovo\t" << "\t1,50\n";   
    cout << "103\t"<< "Hamburger\t" << "\t1,10\n";
    cout << "104\t" << "Cheeseburger\t" << "\t1,30\n";
    cin >> codSand;
    cout << "Agora digite a quantidade:\n";
    cin >> quantSand;
    cout << "Agora escolha o codigo da sua bebida:\n";
    cout << "CODIGO\t"<< "Descricao\t"<< "\tPreco Unitario\n\n";
    cout << "105\t"<< "Refrigerante\t" <<"\t1,00\n";
    cout << "106\t"<< "Suco\t" << "\t\t2,00\n";
    cout << "107\t"<< "Nescau\t" << "\t\t1,50\n";
    cin >> codBeb;
    cout << "Agora digite a quantidade:\n";    
    cin >> quantBeb;

    if ((codSand == 100) && (codBeb == 105)) {
        preco = (1 * quantSand) + (1 * quantBeb);
        cout << "O total foi de R$ " << preco;
    } else {
        if ((codSand == 100) && (codBeb == 106)) {
            preco = (1 * quantSand) + (2 * quantBeb);
            cout << "O total foi de R$ " << preco;    
        } else {
            if ((codSand == 100) && (codBeb == 107)) {
                preco = (1 * quantSand) + (1.5 * quantBeb);
                cout << "O total foi de R$ " << preco;
            } else {
                if ((codSand == 101) && (codBeb == 105)) {
                    preco = (1.3 * quantSand) + (1 * quantBeb);
                    cout << "O total foi de R$ " << preco;
                } else {
                    if ((codSand == 101) && (codBeb == 106)) {
                        preco = (1.3 * quantSand) + (2 * quantBeb);
                        cout << "O total foi de R$ " << preco;
                    } else { 
                    	if ((codSand == 101) && (codBeb == 107)) {
                    		preco = (1.3 * quantSand) + (1.5 * quantBeb);
                        	cout << "O total foi de R$ " << preco;
						} else {
							if ((codSand == 101) && (codBeb == 107)) {
                  	  			preco = (1.3 * quantSand) + (1.5 * quantBeb);
                        		cout << "O total foi de R$ " << preco;
							} else {
								if ((codSand == 102) && (codBeb == 105)) {
                  	  				preco = (1.5 * quantSand) + (1 * quantBeb);
                        			cout << "O total foi de R$ " << preco;
								} else {
									if ((codSand == 102) && (codBeb == 106)) {
                  	  					preco = (1.5 * quantSand) + (2 * quantBeb); 
                  	  					cout << "O total foi de R$ " << preco;
									} else {
										if ((codSand == 102) && (codBeb == 107)) {
                  	  						preco = (1.5 * quantSand) + (1.5 * quantBeb); 
                  	  						cout << "O total foi de R$ " << preco; 
										} else {
											if ((codSand == 103) && (codBeb == 105)) {
                  	  							preco = (1.1 * quantSand) + (1 * quantBeb); 
                  	  							cout << "O total foi de R$ " << preco;
											} else {
												if ((codSand == 103) && (codBeb == 106)) {
                  	  								preco = (1.1 * quantSand) + (2 * quantBeb); 
                  	  								cout << "O total foi de R$ " << preco;
												} else {
													if ((codSand == 103) && (codBeb == 107)) {
                  	  									preco = (1.1 * quantSand) + (1.5 * quantBeb); 
                  	  									cout << "O total foi de R$ " << preco;
													} else {
														if ((codSand == 104) && (codBeb == 105)) {
                  	  										preco = (1.3 * quantSand) + (1 * quantBeb); 
                  	  										cout << "O total foi de R$ " << preco;
														} else {
															if ((codSand == 104) && (codBeb == 106)) {
                  	  											preco = (1.3 * quantSand) + (2 * quantBeb); 
                  	  											cout << "O total foi de R$ " << preco;
															} else {
																if ((codSand == 104) && (codBeb == 107)) {
                  	  												preco = (1.3 * quantSand) + (1.5 * quantBeb); 
                  	  												cout << "O total foi de R$ " << preco;
																} else {
																	cout << "Codigo Incorreto";
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
               			}
           			}
        		}
   			}
   		}
   	}
    
    system("pause");
}
