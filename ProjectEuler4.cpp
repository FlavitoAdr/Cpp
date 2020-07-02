#include <iostream>

using namespace std;

int main(){
	int p=0;
	int i[6];
	int m=0;
	
	for(int cobaia_1=999; cobaia_1>0; cobaia_1--)
		for(int cobaia_2=cobaia_1; cobaia_2>0; cobaia_2--){
			i[0]=(cobaia_1*cobaia_2%10);
			i[1]=(cobaia_1*cobaia_2%100)/10;
			i[2]=(cobaia_1*cobaia_2%1000)/100;
			i[3]=(cobaia_1*cobaia_2%10000)/1000;
			i[4]=(cobaia_1*cobaia_2%100000)/10000;
			i[5]=(cobaia_1*cobaia_2%1000000)/100000;
			
			if(i[0]==i[5] and i[1]==i[4] and i[2]==i[3]){
			//	cout<<cobaia_1<<endl<<cobaia_2<<endl<<cobaia_1*cobaia_2<<endl;
				if(cobaia_1*cobaia_2>m)
					m=cobaia_1*cobaia_2;
			}
		}
		
		cout<<m;
	
	return 0;
}
/*
Um número palíndrico lê da mesma maneira nos dois sentidos. O maior palíndromo produzido a partir do produto de dois números de dois dígitos é 9009 = 91 × 99.

Encontre o maior palíndromo produzido a partir do produto de dois números de 3 dígitos.
*/
