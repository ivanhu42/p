#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, m, a, i, j;
  cin >> n >> m;
  vector<bool> v(m, false);
  while (n--)
  {
    cin >> j;
    while (j--)
    {
      cin >> a;
      v[a - 1] = true;
    }
  }
  for (i = 0; i < m; i++)
  {
    if (!v[i])
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
