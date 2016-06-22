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
  int n, i, j, r = 0;
  char c;
  cin >> n;
  vector<int> row(n, 0);
  vector<int> col(n, 0);
  for (i = 0; i != n; i++)
  {
    for (j = 0; j != n; j++)
    {
      cin >> c;
      if (c == 'C')
      {
        row[i]++;
        col[j]++;
      }
    }
  }
  for (i = 0; i != n; i++)
  {
    if (row[i] > 1)
      r += row[i] * (row[i] - 1) / 2;
    if (col[i] > 1)
      r += col[i] * (col[i] - 1) / 2;
  }
  cout << r << endl;
  return 0;
}
