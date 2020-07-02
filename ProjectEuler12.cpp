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
