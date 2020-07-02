#include<iostream>

#define primos 20

using namespace std;

int mmc(int a,int b);
void gerar_primos();

int q_nprimos=primos, nprimo_configurados, confirmar, nprimo[primos], v_mmc;

int main(){
	gerar_primos();
	
	int memoria=1;
	
	for(int cobaia_1=2;cobaia_1<21;cobaia_1++){
		memoria=mmc(memoria,cobaia_1);
	}
	
	cout<<memoria;
	
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

int mmc(int a,int b){
	v_mmc=1;
	for(int cobaia_1=0;cobaia_1<primos;cobaia_1++)
		while(a%nprimo[cobaia_1]==0 or b%nprimo[cobaia_1]==0){
			v_mmc=v_mmc*nprimo[cobaia_1];
			if(a%nprimo[cobaia_1]==0)
				a=a/nprimo[cobaia_1];
			if(b%nprimo[cobaia_1]==0)
				b=b/nprimo[cobaia_1];
		}
	
	return v_mmc;
}

