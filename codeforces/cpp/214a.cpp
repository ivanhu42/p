#include <iostream>

using namespace std;

int main()
{
  int n, m, a, b, r = 0;
  cin >> n >> m;
  for (a = 0; a <= m; a++)
    for (b = 0; b <= n; b++)
      if (a * a + b == n && a + b * b == m)
        r++;
  cout << r << endl;
  return 0;
}
