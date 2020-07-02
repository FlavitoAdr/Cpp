#include<iostream>

using namespace std;

int config(int x);
int calcular();

int dia,mes,ano,bissexto,resultado,vigia_1,dias_sobra[12];

int main(){
	int quantidade, resultado;
	
	for(int cobaia_1=0;cobaia_1<100;cobaia_1++)
		quantidade=config(cobaia_1);
	
	cout<<quantidade;
	
	return 0;
}

int config(int x){
	int d_1,d_2,dias[4],t_mes, q;
	
	ano=x+1901;
	dia=1;
	
	dias_sobra[0]=0;
	dias_sobra[1]=3;
	dias_sobra[2]=3;
	dias_sobra[3]=6;
	dias_sobra[4]=8;
	dias_sobra[5]=11;
	dias_sobra[6]=13;
	dias_sobra[7]=16;
	dias_sobra[8]=19;
	dias_sobra[9]=21;
	dias_sobra[10]=24;
	dias_sobra[11]=26;
	
	for(int cobaia_1=1;cobaia_1<13;cobaia_1++){
		mes=cobaia_1;
		
		if(mes==2)
			if(ano%4)
				t_mes=1;
			else
				t_mes=0;
			else if(mes==4 or mes==6 or mes==9 or mes==11)
				t_mes=2;
		else
			t_mes=3;
			
		bissexto=(2017-ano)/4;
		
		if(mes<3 and ano>2016 and ano%4==0)
			bissexto--;
			
		bissexto--;
		
		q+=calcular();
	}
	
	return q;
}

int calcular(){
	int domingo=0;
	
	if(ano>2016)
		resultado=dia+dias_sobra[mes-1]+ano+bissexto-2017;
	else
		resultado=dia+dias_sobra[mes-1]+ano-bissexto-2019;
		
	while(resultado<0)
		resultado=resultado+7;
		
	resultado=resultado%7;
	
	if(resultado==0)
			domingo=1;
	
	return domingo;
}
