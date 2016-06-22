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

using namespace std;
typedef long double db;
typedef long long ll;

int check(char c1, char c2, char c3, char c4)
{
  vector<char> v(4);
  v[0] = c1;
  v[1] = c2;
  v[2] = c3;
  v[3] = c4;
  sort(v.begin(), v.end());
  if (v[0] == 'a' && v[1] == 'c' && v[2] == 'e' && v[3] == 'f')
    return 1;
  else
    return 0;
}

int main()
{
  int n, m, i, j, r = 0;
  char c;
  cin >> n >> m;
  vector<char> row(m);
  vector<vector<char> > all(n, row);
  for (i = 0; i < n; i++)
    for (j = 0; j < m; j++)
    {
      cin >> c;
      all[i][j] = c;
    }
  if (n > 1 && m > 1)
    for (i = 0; i < n - 1; i++)
      for (j = 0; j < m - 1; j++)
        r += check(all[i][j], all[i][j+1], all[i+1][j], all[i+1][j+1]);
  cout << r << endl;

  return 0;
}
