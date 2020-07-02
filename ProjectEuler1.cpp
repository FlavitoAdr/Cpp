#include <iostream>

using namespace std;

int main(){
	int soma=0;
	
	for(int cobaia_1=1;cobaia_1<1000;cobaia_1++)
		if(cobaia_1%3==0 or cobaia_1%5==0)
			soma+=cobaia_1;
			
	cout<<soma;
	
	return 0;
}

/*
Se listarmos todos os números naturais abaixo de 10 que são múltiplos de 3 ou 5, obtemos 3, 5, 6 e 9. A soma desses múltiplos é 23.

Encontre a soma de todos os múltiplos de 3 ou 5 abaixo de 1000.
*/
