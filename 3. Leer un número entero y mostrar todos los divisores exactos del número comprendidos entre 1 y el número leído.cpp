#include <iostream>
#include <stdio.h>

        using namespace std;

        int main()

        {
            int numero, inicio;
            
            cout<< "ingrese numero"<<endl;
            
            cin >> numero;
            
            cout<< "///////////////////"<<endl;
            
            inicio = 1 ;
            
            
            
            while (inicio < numero) {
                if (numero >= inicio) {
                
                inicio = inicio+1;
                
                }
                if (numero%inicio == 0) {
                    cout << inicio <<" << es divisible exacto"<<endl;

                }                
            }
                
                

            return (0);
            
        }