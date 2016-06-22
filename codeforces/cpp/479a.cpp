#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, c, r;
  cin >> a >> b >> c;
  if (a == 1)
  {
    if(b == 1)
    {
      if(c == 1)
        r = 3;
      else
        r = c * 2;
    }
    else
    {
      if(c == 1)
        r = b + 2;
      else
        r = b * c + c;
    }
  }
  else
  {
    if (b == 1)
    {
      if(c == 1)
        r = a * 2;
      else
        r = a * c + max(a, c);
    }
    else
    {
      if (c == 1)
        r = a * b + a;
      else
        r = a * b * c;
    }
  }
  cout << r << endl;
  return 0;
}
