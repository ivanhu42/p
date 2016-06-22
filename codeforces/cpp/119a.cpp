#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

int main()
{
  int a, b, n, r, win = 1;
  cin >> a >> b >> n;
  r = n;
  while (r > 0)
  {
    if(win == 0)
    {
      if(r - gcd(b, r) > 0)
        win = 1;
      r -= gcd(b, r);
    }
    else
    {
      if(r - gcd(a, r) > 0)
        win = 0;
      r -= gcd(a, r);
    }
  }
  cout << 1 - win << endl;
  return 0;
}
