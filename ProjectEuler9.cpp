#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a, b, c;
	
	for(int cobaia_1=1;cobaia_1<997;cobaia_1++)
		for(int cobaia_2=cobaia_1;cobaia_2<998;cobaia_2++)
			for(int cobaia_3=cobaia_2;cobaia_3<999;cobaia_3++)
				if(pow(cobaia_1,2)+pow(cobaia_2,2)==pow(cobaia_3,2) and cobaia_1+cobaia_2+cobaia_3==1000){
					cout<<cobaia_1*cobaia_2*cobaia_3;
					cobaia_1=1000;
					cobaia_2=1000;
					cobaia_3=1000;
				}
	
	return 0;
}
