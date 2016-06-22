#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int k, i, t = 0, a, s = 0, r = 0;
  vector<int> v(12);
  cin >> k;
  for (i = 0; i < 12; i++)
  {
    cin >> a;
    t += a;
    v[i] = a;
  }
  if (k == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  if (t < k)
    cout << -1 << endl;
  else
  {
    sort(v.begin(), v.end());
    for (i = 0; i < 12; i++)
    {
      r++;
      s += v[11 - i];
      if (s >= k)
        break;
    }
    cout << r << endl;
  }
  return 0;
}
