#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, m, r;
  cin >> n >> m;
  if (n < m)
    cout << "-1" << endl;
  else if (n >= m && n <= 2 * m)
    cout << m << endl;
  else
  {
    r = ceil((double) n / 2);
    for (int i = 0; i < m; i++)
      if((r + i) % m == 0)
        cout << r + i << endl;
  }
  return 0;
}
