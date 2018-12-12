
# include <iostream>
# include <stdio.h>

using namespace std;

int main()
{
	int n,suma,contador,digito,i,a=0;
	
	cout<<"Ingrese numero: "<<endl;
	cin>>n;
	
	while(n>0)
	{
		digito=n%10;
		contador=contador+digito;
		n=n/10;
	}
	cout<<contador<<endl;
	
	for(i=1;i<(contador+1);i++){
         if(contador%i==0){
             a++;
            }
         }
         if(a!=2){
              cout<<"No es Primo";
            }else{
                cout<<"Si es Primo";
         }
	return(0);
}