#include <stdio.h>


void bin(unsigned n)
{
    if (n > 1)
    bin(n>>1);
    
    printf("%d", n & 1);
    }

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
  
  printf("Adres: %p lb: %lu\n", &i1, sizeof(i1) );
  printf("Adres: %p lb: %lu\n", &i2, sizeof(i2) );
  printf("Adres: %p lb: %lu\n", &ui1, sizeof(ui1) );
  printf("Adres: %p lb: %lu\n", &ui2, sizeof(ui2) );
  printf("Adres: %p lb: %lu\n", &l1, sizeof(l1) );
  printf("Adres: %p lb: %lu\n", &l2, sizeof(l2) );
  printf("Adres: %p lb: %lu\n", &ul1, sizeof(ul1) );
  printf("Adres: %p lb: %lu\n", &ul2, sizeof(ul2) );
  printf("Adres: %p lb: %lu\n", &s1, sizeof(s1) );
  printf("Adres: %p lb: %lu\n", &s2, sizeof(s2) );
  printf("Adres: %p lb: %lu\n", &us1, sizeof(us1) );
  printf("Adres: %p lb: %lu\n", &us2, sizeof(us2) );
  printf("Adres: %p lb: %lu\n", &f1, sizeof(f1) );
  printf("Adres: %p lb: %lu\n", &d1, sizeof(d1) );
  printf("Adres: %p lb: %lu\n", &c, sizeof(c) );
  
  
  bin(i1);
  printf("\n");
  bin(i2);
  printf("\n");
  bin(ui1);
  printf("\n");
  bin(ui2);
  printf("\n");
  bin(l1);
  printf("\n");
  bin(l2);
  printf("\n");
  bin(ul1);
  printf("\n");
  bin(ul2);
  printf("\n");
  bin(s1);
  printf("\n");
  bin(s2);
  printf("\n");
  bin(us1);
  printf("\n");
  bin(us2);
  printf("\n");
  bin(f1);
  printf("\n");
  bin(d1);
  printf("\n");
  bin(c);
  printf("\n");
  
  }
