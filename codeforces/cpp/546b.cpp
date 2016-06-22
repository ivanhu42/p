#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, i, a, r = 0;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  sort(v.begin(), v.end());
  for (i = 1; i < n; i++)
  {
    if (v[i] <= v[i - 1])
    {
      r += v[i - 1] + 1 - v[i];
      v[i] = v[i - 1] + 1;
    }
  }
  cout << r << endl;
  return 0;
}
