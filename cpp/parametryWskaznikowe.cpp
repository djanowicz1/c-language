#include<iostream>
using namespace std;

void zamiana( int* x, int* y) {

    int k = *x;
    *x = *y;
    *y = k;

    return;


}

int main()
{
  int x = 5;
  int y = 10;

  cout << "Przed zamiana\n"; 
  cout << "x = " << x << " y = " << y << "\n"; 

  cout << "Wartosci po zamianie: " <<endl;
  zamiana(&x, &y);
  cout << "x = " << x << " y = " << y << "\n";

  return 0;
}