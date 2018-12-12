# include <iostream>
# include <stdio.h>

using namespace std;

int main()

{
	int numero, inicio;
	
	cout<< "ingrese numero"<<endl;
	
	cin >> numero;
	
	cout<< "///////////////////"<<endl;
	
	inicio = numero - numero ;
	
	
	
	while (inicio < numero) {
		if (numero >= inicio) {
		
		inicio = inicio+1;
		
		}
		cout << inicio <<endl;
		
	}
		
		

	return (0);
	
}