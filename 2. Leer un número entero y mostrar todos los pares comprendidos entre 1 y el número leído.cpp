# include <iostream>
# include <stdio.h>

using namespace std;

int main()

{
	int numero, inicio, par, final ;
	
	cout<< "ingrese numero"<<endl;
	
	cin >> numero;
	
	cout<< "///////////////////"<<endl;
	
	inicio = 0 ;
	
	par = 2;
	
	while (final < numero) {
		if (numero > inicio) {
		
		
		final = par * inicio++;
		
		
		}
					cout << final <<endl;
		
	}
	
	

	
	return (0);
	
}

	
