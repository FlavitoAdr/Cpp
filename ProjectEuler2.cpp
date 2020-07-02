#include <iostream>

using namespace std;

int main(){
	int soma=2, a, b,c;
	
	a=1;
	b=2;
	
	do{
		c=a+b;
		if(c%2==0)
			soma+=c;
		a=b;
		b=c;
	}while(c<4000000);
	
	cout<<soma;
	
	return 0;
}

/*
Cada novo termo na sequência de Fibonacci é gerado adicionando os dois termos anteriores. Começando com 1 e 2, os 10 primeiros termos serão:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

Considerando os termos da sequência de Fibonacci cujos valores não excedem quatro milhões, encontre a soma dos termos com valores pares.
*/
