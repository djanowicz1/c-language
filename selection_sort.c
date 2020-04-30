#include <stdio.h>

float* minp(float* tablica, int size) {
    int c;
    unsigned int index;

  for (c = 1; c < size; c++) {
    if (tablica[c] < *tablica) {
       index = c;
       *tablica = tablica[c];
    }
  }
}

void zamiana(float *x, float *y) {

    float z = *x;
    *x = *y;
    *y = z;
}

void ssort(float* tablica, int size) {

    int i, j, min_element; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < size-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_element = i; 
        for (j = i+1; j < size; j++) 
          if (tablica[j] < tablica[min_element]) 
            min_element = j; 
  
        // Swap the found minimum element with the first element 
        zamiana(&tablica[min_element], &tablica[i]); 
    } 
}

void pokazTablice(float tablica[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%f \n", tablica[i]); 
} 

int main(){
   float tablica[10] = {3.0, 1.5, 4.7, 2.4, 0.8, 3.9, 7.5, 8.7, 9.4, 5.8};
    unsigned int size;
    size = sizeof(tablica)/sizeof(tablica[0]);
    ssort(tablica, size);
    printf("Sorted array: \n"); 
    pokazTablice(tablica, size); 
    return 0; 
   
}
