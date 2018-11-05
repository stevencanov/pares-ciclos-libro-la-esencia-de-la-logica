# include <iostream>
# include <stdio.h>

using namespace std;

int main()

{
	int numero, final;
	
	cout<< "ingrese numero";
	
	cin << numero;
	
	final = numero - numero ;
	
	
	
	while (numero > final) {
		if (numero >= final) {
		
		final = final+1;
		
		}
		cout << final;
		
	}
		
		
system ("pause");
	return (0);
	
}