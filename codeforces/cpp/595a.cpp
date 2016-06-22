#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, m, i, r = 0, a, b;
  cin >> n >> m;
  for (i = 0; i < m * n; i++)
  {
    cin >> a >> b;
    if (a == 1 || b == 1)
      r++;
  }
  cout << r << endl;
  return 0;
}
