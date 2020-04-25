#include <stdio.h>

void zamiana(float *x, float *y) 
{

    float z = *x;
    *x = *y;
    *y = z;
    
}

void bsort(float* tablica, int size) {
   int i, j; 
   for (i = 0; i < size-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < size-i-1; j++)  
           if (tablica[j] > tablica[j+1]) 
              zamiana(&tablica[j], &tablica[j+1]); 

}

void printArray(float tablica[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%f ", tablica[i]); 
    printf("\n"); 
}


int main(){
    float tablica[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8}; 
    unsigned int size;
    size = sizeof(tablica)/sizeof(tablica[0]);
    bsort(tablica, size); 
    printf("Tablica po sortowaniu: \n"); 
    printArray(tablica, size); 
    return 0; 
    
}
