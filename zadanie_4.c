#include <stdio.h>

void zamiana( int x, int y) {

    int k;
    k = x;
    x = y;
    y = k;
    printf("x : y \n");
    printf("%d", x);
    printf("  %d",y);
    return;

}

int main()
{
  int x = 5;
  int y = 10;
  printf("x : y\n");
  printf("%d", x);
  printf("  %d \n",y);
  printf("-------\n");
  printf("wartosci po zamianie: \n");
  zamiana(x,y);
  

  return 0;
}