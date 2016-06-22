#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, a, b, c, i, j, r = 0, t;
  cin >> n >> a >> b >> c;
  for (i = 0; i <= n / a; i++)
  {
    for (j = 0; j <= (n - a * i) / b; j++)
    {
      t = n - i * a - j * b;
      if (t % c == 0)
      {
        r = max(r, i + j + t / c);
      }
    }
  }
  cout << r << endl;
  return 0;
}
