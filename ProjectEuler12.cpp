#include <iostream>

using namespace std;

int main(){
	int a=0, b=0;
	
	for(int cobaia_1=1;a<499;cobaia_1++){
		a=0;
		b+=cobaia_1;
		for(int cobaia_2=1;cobaia_2<=b/2;cobaia_2++){
			if(b%cobaia_2==0)
				a++;
		}
	}
	
	cout<<b;
		
	return 0;
}

/*
A sequência dos números dos triângulos é gerada adicionando os números naturais. Portanto, o número do 7º triângulo seria 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. Os dez primeiros termos seriam:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Vamos listar os fatores dos sete primeiros números do triângulo:

 1 : 1
 3 : 1,3
 6 : 1,2,3,6
10 : 1,2,5,10
15 : 1,3,5,15
21 : 1,3,7,21
28 : 1,2, 4,7,14,28
Podemos ver que 28 é o primeiro número do triângulo a ter mais de cinco divisores.

Qual é o valor do primeiro número do triângulo para ter mais de quinhentos divisores?
*/
