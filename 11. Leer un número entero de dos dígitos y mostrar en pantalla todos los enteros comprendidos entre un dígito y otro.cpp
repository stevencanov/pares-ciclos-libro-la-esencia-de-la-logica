#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()
{
	
	
	
	int n, start, end;
	
	cout << "ingresar numero "<< endl;
	cin>> n;
	
	start = n /10; // primer digito
	end = n % 10;  // segundo digito
	
	cout << "los numeros son: "  << endl;

	
	while (start < end) {
		if (start < end) {
			start++;
			
			
			
			cout << start-1 << endl;

		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return(0);
}