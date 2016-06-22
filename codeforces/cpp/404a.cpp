#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <utility>
#include <cctype>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  char c, c1, c2;
  int n, i, j;
  cin >> n;
  vector<char> row(n);
  vector<vector<char> > all(n, row);
  for (i = 0; i != n; i++)
  {
    for (j = 0; j != n; j++)
    {
      cin >> c;
      all[i][j] = c;
    }
  }
  c1 = all[0][0];
  c2 = all[0][1];
  if (c1 != c2)
  {
    for (i = 0; i != n; i++)
    {
      for (j = 0; j != n; j++)
      {
        if (i == j || i + j == n - 1)
        {
          if (all[i][j] != c1)
          {
            cout << "NO" << endl;
            return 0;
          }
        }
        else
        {
          if (all[i][j] != c2)
          {
            cout << "NO" << endl;
            return 0;
          }
        }
      }
    }
    cout << "YES" << endl;
  }
  else
    cout << "NO" << endl;

  return 0;
}
