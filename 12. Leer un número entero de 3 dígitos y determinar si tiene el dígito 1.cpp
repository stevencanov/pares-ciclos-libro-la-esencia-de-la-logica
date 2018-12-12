#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()
{
	
	
	
	int n, n1, n2, n3, conta1,conta2,conta3, suma;
	
	cout << "ingresar numero de 3 digitos"<< endl;
	cin>> n;
	
	n1 = n / 100; // primer digito
    n2 = (n / 10) % 10; // segundo digito
	n3 = n % 10;  // tercer digito	   
    conta1 = 0;

while (n1 > 0 && n1 < 2 ) {
	
	if (n1 == 1) {
		conta1++;
			cout << n1 << endl;			
	}
	
}

while (n2 > 0 && n2 < 2 ) {
	
	
	if (n2 == 1) {
		conta2++;
			cout << n2 << endl;	
		
	}
	
		
}

while (n3 > 0 && n3 < 2 ) {
	
	
	if (n3 == 1) {
		conta3++;
			cout << n3 << endl;		
	}
	
	if (suma>=1) {
		cout << "el numero tiene el digito 1" << endl;
	}
}






	
return(0);
}