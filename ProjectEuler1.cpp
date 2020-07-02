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
