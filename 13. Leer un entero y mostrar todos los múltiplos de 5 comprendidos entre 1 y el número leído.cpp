#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()

	{
	
	
	int n, start;
	
	cout<<"ingrese numero"<<endl;
	
	cin>>n;
	 start = 0;
	
	while (start < n) {
		if(start < n){
			start++;
		}
		if(start % 5 == 0){
			
		cout<< start <<endl;
	}
			
	}

	 
		return(0);
		}