#include <stdio.h>

unsigned int find_minimum(float[], unsigned int);  

int main() 
{
    int c;
    float tab[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8}, *minimum; 
    unsigned int size, location; 
    size = sizeof(tab)/sizeof(tab[0]);
    int i;

    printf("Przed funkcja: \n");
    for (i=0;i < size;i++) {
    printf("%f\n",tab[i]);
    }   

    location = find_minimum(tab, size);
    int pozycja = (int)location;
    minimum = &tab[pozycja];

    printf("Po funkcji: \n");
    for (i=0;i < size;i++) {
    printf("%f\n",tab[i]);
    }  
    
   printf("Najmniejsza liczba wynosi: %f \n", *minimum);
   printf("Indeks najmniejszej wynosi: %d \n", location);
   printf("Adres najmniejszej liczby: %p \n", minimum);
   printf("Adres zmiennej minimum wynosi: %p \n", &minimum);

    return 0;
}

unsigned int find_minimum(float tab[], unsigned int n){
    int c;
    unsigned int index;

  for (c = 1; c < n; c++) {
    if (tab[c] < tab[index]) {
       index = c;
    }
  }
  
  return index;
}