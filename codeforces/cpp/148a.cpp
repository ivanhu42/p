#include <iostream>

using namespace std;

int main()
{
  int k, l, m, n, d, r = 0;
  cin >> k >> l >> m >> n >> d;
  if ((k - 1) * (l - 1) * (m - 1) * (n - 1) == 0)
    cout << d << endl;
  else
  {
    for (int i = 1; i <= d; i++)
      if ((i % k) * (i % l) * (i % m) * (i % n) == 0)
        r++;
    cout << r << endl;
  }
  return 0;
}
