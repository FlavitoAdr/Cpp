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
