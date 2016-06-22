#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  long long n, i, j, a, t;
  vector<long long> p(1000000, true);
  p[0] = false;
  for (i = 3; i < 1000000; i++)
  {
    t = i + 1;
    if (t % 2 == 0)
      p[i] = false;
    else
    {
      for (j = 3; j < sqrt(t) + 1; j += 2)
      {
        if (t % j == 0)
        {
          p[i] = false;
          break;
        }
      }
    }
  }
  cin >> n;
  vector<bool> r(n, false);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (sqrt(a) == floor(sqrt(a)))
      if (p[sqrt(a) - 1])
        r[i] = true;
  }
  for (i = 0; i < n; i++)
  {
    if (r[i])
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
