#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, i, a, m1 = 1, m2 = 101, m1i = 0, m2i = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (a > m1)
    {
      m1i = i;
      m1 = a;
    }
    else if (a < m2)
    {
      m2i = i;
      m2 = a;
    }
  }
  cout << max(max(n - 1 - m1i, m1i), max(n - 1 - m2i, m2i)) << endl;
  return 0;
}
