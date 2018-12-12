# include <iostream>
# include <stdio.h>

using namespace std;

int main()
{
	int n, delta, i=1;
	
	cout<<"ingresar numero"<<endl;
	cin>>n;
	
	while (n>=i) {
		
		delta= n % i;
		
	if (delta == 0) {
		cout<<i<<endl;
	}
		i++;
		
	}
	


		
	
	
	return (0);
}