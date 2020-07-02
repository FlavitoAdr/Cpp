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
