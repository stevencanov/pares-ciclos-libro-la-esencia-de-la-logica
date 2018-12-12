#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()

	{
		int n, d1, d2 ,d3, start1, start2, start3;
		
		cout<< "ingresar numero de menor a mayor"<<endl;
		
		cin>> n;


	    d1 =  n / 100; // primer digito
		d2 = (n / 10) % 10; // segundo digito
		d3 =  n  % 10; // tercer digito
		
		
		if (n > 99 && n < 999) {
			
			
			start1 = 0;		
			start2 = 0;	
			start3 = 0;		
			
		cout<< "primer digito"<<endl;	
		while (start1 < d1) {
			if (start1 < d1) {
				start1++;
				
				cout<< start1<<endl;
				
			}
		}	
		cout<< "segundo digito"<<endl;	
		while (start2 < d2) {
			if (start2 < d2) {
				start2++;
				
				cout<< start2<<endl;
				
			}
		}	
		cout<< "tercer digito"<<endl;	
		while (start3 < d3) {
			if (start3 < d3) {
				start3++;
				
				cout<< start3<<endl;
				
			}
		}	
		
		

		
		
		
		
				
			
		}
		return(0);
		}