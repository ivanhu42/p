#include <iostream>

using namespace std;

int main()
{
  int x, r = 0;
  cin >> x;
  while (x)
  {
    r += x % 2;
    x = x / 2;
  }
  cout << r << endl;
}
