#include <stdio.h>

int main(){
   int i1 = 1, i2 = -1;
   unsigned int ui1 = 1, ui2 = -1;
   long l1 = 2, l2 = -2;
   unsigned long ul1 = 2, ul2 = -2;
   short s1 = 3, s2 = -3;
   unsigned short us1 = 3, us2 = -3;
   float f1 = 2.5;
   double d1 = 2.5;
   char c = 'A';
   
   char* ptr;
   int i;
   
   ptr = (char*)&i1;
   for(i=0; i<sizeof(i1); i++)
      printf("%x ", ptr[i]);
   printf("\n");
   ptr = (char*)&l1;
   for(i=0; i<sizeof(l1); i++)
      printf("%x ", ptr[i]);
   printf("\n");
   
}
  
