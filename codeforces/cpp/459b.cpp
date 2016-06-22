#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long n, a, i, m1 = 0, m2 = 0;
  cin >> n;
  vector<long long> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  sort(v.begin(), v.end());
  if (v[0] == v[n - 1])
    cout << 0 << " " << n * (n - 1) / 2 << endl;
  else
  {
    for (i = 0; i < n; i++)
    {
      if (v[i] == v[0])
        m1++;
      else if (v[i] == v[n - 1])
        m2++;
    }
    cout << v[n - 1] - v[0] << " " << m1 * m2 << endl;
  }
  return 0;
}
