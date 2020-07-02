#include <iostream>

#define primos 10001

using namespace std;

void gerar_primos();

int q_nprimos=primos, nprimo_configurados, confirmar, nprimo[primos];

int main(){
	gerar_primos();
	
	cout<<nprimo[10000];
	
	return 0;
}

void gerar_primos(){
	nprimo_configurados=1;
	nprimo[0]=2;
	nprimo[1]=3;
	for(int cobaia_1=5;q_nprimos>=nprimo_configurados;cobaia_1=cobaia_1+2){
		confirmar=0;
		for(int cobaia_2=0;nprimo_configurados>=cobaia_2;cobaia_2++){
			if(cobaia_1%nprimo[cobaia_2]==0)
				confirmar=1;
		}
		if(confirmar==0){
			nprimo_configurados++;
			nprimo[nprimo_configurados]=cobaia_1;
		}
	}
}

/*
Listando os seis primeiros números primos: 2, 3, 5, 7, 11 e 13, podemos ver que o sexto primo é 13.

Qual é o número primo 10 001?
*/
