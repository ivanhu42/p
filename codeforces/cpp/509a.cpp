#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, j;
  cin >> n;
  vector<int> r(n, 1);
  vector<vector<int> > t(n, r);
  for (i = 1; i < n; i++)
    for (j = 1; j < n; j++)
      t[i][j] = t[i - 1][j] + t[i][j - 1];
  cout << t[n - 1][n - 1] << endl;
  return 0;
}
