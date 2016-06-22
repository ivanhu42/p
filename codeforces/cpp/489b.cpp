#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, m, a, i, j, r = 0;
  cin >> n;
  vector<int> b(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    b[i] = a;
  }
  cin >> m;
  vector<int> g(m);
  for (i = 0; i < m; i++)
  {
    cin >> a;
    g[i] = a;
  }
  sort(b.begin(), b.end());
  sort(g.begin(), g.end());
  for (i = 0; i < n; i++)
  {
    if (g.empty())
      break;
    else
    {
      for (j = 0; j < g.size(); j++)
      {
        if (g[j] - b[i] == -1 || g[j] - b[i] == 1 || g[j] - b[i] == 0)
        {
          r++;
          g.erase(g.begin() + j);
          break;
        }
        if (g[j] - b[i] > 1)
          break;
      }
    }
  }
  cout << r << endl;
  return 0;
}
