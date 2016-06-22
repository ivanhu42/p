#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n, m, k, i, j, a, diff, f = 0;
  cin >> n >> m >> k;
  vector<string> v(m + 1);
  for (i = 0; i < m + 1; i++)
  {
    cin >> a;
    string str(n, '0');
    for (j = 0; j < n; j++)
    {
      str[n - 1 - j] = (char) (a % 2 + 48);
      a = a / 2;
    }
    v[i] = str;
  }
  for (i = 0; i < m; i++)
  {
    diff = 0;
    for (j = 0; j < n; j++)
    {
      if (v[i][j] != v[m][j])
        diff++;
    }
    if (diff <= k)
      f++;
  }
  cout << f << endl;
  return 0;
}
