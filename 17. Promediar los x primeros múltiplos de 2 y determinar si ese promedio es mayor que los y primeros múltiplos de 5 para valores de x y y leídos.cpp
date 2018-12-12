#include <iostream>
#include <stdio.h>

	using namespace std;

	int main()

	{
		int x, y,resultadoX, r1x, r2x, r3x, resultadoY, r1y, r2y, r3y ;
		
		cout<<"ingresa numero x"<< endl;
		
		cin>> x;
		
		
		cout<<"ingresa numero y"<< endl;
		
		cin>> y;
		
		
		while (1 < x) {
			if(x < 1){
				 
			x++;
			
			resultadoX = x * 2;
			
			r1x = resultadoX + 1;
			r2x = resultadoX * resultadoX;
			r3x = r2x / 2;

			}
			
		}


		while (1 < y) {
			if(y < 1){
				
			y++;
			resultadoX= y * 2;
			
			
			r1y = resultadoY + 1;
			r2y = resultadoY * resultadoY;
			r3y = r2y / 2;b
			
			}
		}
		
		if (r2x > r3y) {
			cout<<"el promedio x es mayor"<< endl;
		}
		
		else {
			cout<<"el promedio y es mayor"<< endl;
		}


	 
		return(0);
		}