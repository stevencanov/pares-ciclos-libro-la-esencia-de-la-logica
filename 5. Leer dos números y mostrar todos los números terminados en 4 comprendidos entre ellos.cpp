#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()

	{
		int n1, n2,  primerD;
		
		cout<<"ingresa primer numero"<<endl;
		cin>>n1;
		
		cout<<"ingresa segundo numero"<<endl;
		cin>>n2;
		
	
		cout<< "//////////////" <<endl;		
			if (n1 > n2){
				
				while (n1 > n2 ) {
					if(n1 > n2 ) {
						
					n2++;
						
						primerD = n2 % 10; // ultimo digito
						
						if (primerD == 4)
						
						cout<< n2 <<endl;	
						
						
						}
						
						}						
		

			}
			if(n2 > n1){
				
				while (n2 > n1 ) {
					if(n2 > n1 ) {
						
					n1++;
						
						primerD = n1 % 10; // ultimo digito
						
						if (primerD == 4)
						
						cout<< n1 <<endl;	
						
						
						} 
						
						}						
		

			}

				
			
			 
	return (0);
	
} 