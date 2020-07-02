#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double somar=0, final=0;
	int r[10], b;
	
	for(int cobaia_1=0;cobaia_1<100;cobaia_1++){
		cin>>somar;
		final+=somar;
	}
	
	b=log10(final);
	
	r[0]=final/(pow(10, b));
	
	cout<<endl<<r[0];
	
	for(int cobaia_1=1;cobaia_1<10;cobaia_1++){
		final-=r[cobaia_1-1]*pow(10, b-cobaia_1+1);
		r[cobaia_1]=final/(pow(10, b-cobaia_1));
		cout<<r[cobaia_1];
	}
		
	return 0;
}
