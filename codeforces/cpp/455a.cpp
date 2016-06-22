#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int n, i, a, m = 1;
  vector<long long> v(100000, 0);
  vector<long long> r(100000, 0);
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[a - 1]++;
    if (a > m)
      m = a;
  }
  r[0] = 0;
  r[1] = v[0];
  for (i = 2; i <= m; i++)
    r[i] = max(r[i - 1], r[i - 2] + v[i - 1] * i);
  cout << r[m] << endl;
  return 0;
}
