#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
  long long n, a, b, c, d, i = 1, r = 0;
  cin >> n >> a >> b >> c >> d;
  if (abs(b - c) > (n - 1) || abs(a - d) > (n - 1) || abs((a + b) - (c + d)) > (n - 1) || abs((a + c) - (b + d)) > (n - 1))
    cout << 0 << endl;
  else
  {
    while (i <= n)
    {
      if (((i + b - c) > 0) and ((i + b - c) <= n) and ((i + a - d) > 0) and ((i + a - d) <= n) and ((i + a + b - c - d) > 0) and ((i + a + b - c - d) <= n))
        r++;
      i++;
    }
    r = r * n;
    cout << r << endl;
  }
  return 0;
}
