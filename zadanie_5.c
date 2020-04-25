#include <stdio.h>

int main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};


    int  i,n;
    float maly= 100.0;

    
        for( i = 0 ; i < 10 ; i++ )
           {
               if (maly > tab[i])
               {   n = i;
                   maly = tab[i];

               }

           }
 
   printf("Najmniejsza liczba wynosi: %f \n", maly);
   printf("Indeks najmniejszej wynosi: %i \n", n);
   printf("Adres najmniejszej liczby: %p \n", tab + n);
}

