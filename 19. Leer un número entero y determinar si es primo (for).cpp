#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()

	{
	int n, i, counter ;
	
		
		cout<< "ingrese numero"<<endl;
		
		cin >> n;
		
		cout<< "///////////////////"<<endl;
		
		counter = 0 ;
		
		
for (i=1; i<n; i++) {
	if (n % i == 0 ) {
		counter++;
		
			}
}
if (counter > 2) {
	 cout<<"el numero no es primo"<<endl;
}
else {
	 cout<<"el numero  es primo"<<endl;
}


return (0);
	}
	