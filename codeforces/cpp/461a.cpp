#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long n, i, a, r = 0;
  cin >> n;
  vector<long long> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  sort(v.begin(), v.end());
  for (i = 0; i < n; i++)
  {
    r += v[i] * (i + 2);
  }
  r -= v[n - 1];
  cout << r << endl;
  return 0;
}
