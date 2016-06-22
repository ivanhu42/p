#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int n, m, i, f, r;
  cin >> n >> m;
  vector<int> list(m);
  for (i = 0; i < m; i++)
  {
    cin >> f;
    list[i] = f;
  }
  sort(list.begin(), list.end());
  r = list[m - 1] - list[0];
  for (i = 0; i <= m - n; i++)
    r = min(r, list[i + n - 1] - list[i]);
  cout << r << endl;
  return 0;
}
