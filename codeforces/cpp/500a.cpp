#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, t, i, a, d = 1;
  cin >> n >> t;
  vector<int> v(n, 0);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  while (d < t)
  {
    d = v[d - 1] + d;
    if (d == t)
    {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
