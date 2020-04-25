#include<iostream>
using namespace std;

void zamiana( int &x, int &y) {

    int k;
    k = x;
    x = y;
    y = k;
    cout << x << " : " << y << endl;
    return;


}

int main()
{
  int x = 5;
  int y = 10;
  
  cout << " x :  y\n"
          "-------\n"
       << x << " : " << y << endl;
  cout << "wartosci po zamianie: " <<endl;
  zamiana(x,y);
  return 0;
}
