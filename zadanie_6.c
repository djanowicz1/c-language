#include <stdio.h>

int main(){
   int c, location = 1;
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8}, *minimum;


    for (c = 0; c < 10; c++)
    
    minimum = tab;
    *minimum = *tab;
    
    for (c = 1; c < 10; c++) 
    {
        if (*(tab+c) < *minimum) 
        {
           *minimum = *(tab+c);
           location = c;
        }
    } 


 
   printf("Najmniejsza liczba wynosi: %f \n", *minimum);
   printf("Indeks najmniejszej wynosi: %i \n", location);
   printf("Adres najmniejszej liczby: %p \n", &minimum);

   return 0;
}
