
	#include<iostream>
	#include<stdio.h>

	using namespace std;

	int main()
	{
int n1, n2,c1,c2;

cout<<"Ingrese primer numero entero: "<<endl;
cin>>n1;

cout<<"Ingrese segundo numero entero: "<<endl;
cin>>n2;

c1= 0;

while(n1 != 0){
	
	c1++;
	n1= n1/10;
	
	
}
cout<<c1<<endl;

c2= 0;

while (n2 != 0) {
	c2++;
	n2= n2/10;
	
}

cout<<c2<<endl;


if (c1 == c2) {
	cout<<"los digitos de los 2 numeros son iguales"<<endl;
	
}
	if (c1 > c2) {
		cout<<"el primer numero "<<" tiene mas digitos que "<<" el segundo numero"<<endl;
	}
	if (c2 > c1){
		cout<<"el segundo numero "<<" tiene mas digitos que "<<" el primer numero"<<endl;
	}



		return(0);
	}
	
	