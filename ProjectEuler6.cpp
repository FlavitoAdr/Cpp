#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a=0, b=0, c;
	
	for(int cobaia_1=1;cobaia_1<101;cobaia_1++)
		a+=pow(cobaia_1, 2);
		
	b=pow(((1+100)*100)/2,2);
		
	cout<<b-a;
	
	return 0;
}

/*
A soma dos quadrados dos dez primeiros números naturais é,

1^2+2^2+ . . . +10^2= 385
O quadrado da soma dos dez primeiros números naturais é,

( 1 + 2 + . . . + 10)^2=55^2= 3025
Portanto, a diferença entre a soma dos quadrados dos dez primeiros números naturais e o quadrado da soma é 3025 - 385 = 2640.

Encontre a diferença entre a soma dos quadrados dos primeiros cem números naturais e o quadrado da soma.
*/
