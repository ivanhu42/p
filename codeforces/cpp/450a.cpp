#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, m, i, r, a;
  cin >> n >> m;
  vector<int> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (a % m == 0)
      v[i] = a / m;
    else
      v[i] = a / m + 1;
  }
  a = 0;
  for (i = 0; i < n; i++)
    if (v[i] >= a)
    {
      r = i + 1;
      a = v[i];
    }
  cout << r << endl;
  return 0;
}
