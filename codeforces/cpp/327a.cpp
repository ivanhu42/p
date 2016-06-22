#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int n, i, j, a, s = 0, tm = 0, m = 0;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (a == 1)
    {
      s++;
      v[i] = -1;
    }
    else
    {
      v[i] = 1;
    }
  }
  m = v[0];
  for (i = 0; i < n; i++)
  {
    tm = v[i];
    for (j = i + 1; j < n; j++)
    {
      tm += v[j];
      m = max(m, tm);
    }
  }
  cout << s + m << endl;
  return 0;
}
