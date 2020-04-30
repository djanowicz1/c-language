#include <stdio.h>

int main(){
   float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};


    int  i,n,m;
    float maly= 100.0;
    float duzy =0.0;
    
        for( i = 0 ; i < 10 ; i++ )
           {
               if (maly > tab[i])
               {   n = i;
                   maly = tab[i];

               }

               if (duzy < tab[i])
               {    m = i;
                    duzy = tab[i];
               }

           }

           
   printf("Najmniejsza liczba wynosi: %f \n", maly);
   printf("Najwieksza liczba wynosi: %f \n", duzy);
   printf("Indeks najmniejszej wynosi: %i \n", n);
   printf("Indeks najwiekszej liczby wynosi: %i \n", m);
   printf("Adres najmniejszej liczby: %p \n", tab + n);
   printf("Adres najmniejszej liczby: %p \n", tab + m);
}
