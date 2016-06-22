#include <iostream>
#include <vector>

using namespace std;

int main()
{
  long long n, v, i, j, k, a, r = 0;
  cin >> n >> v;
  vector<bool> l(n, false);
  for (i = 0; i < n; i++)
  {
    cin >> j;
    for (k = 0; k < j; k++)
    {
      cin >> a;
      if (a < v)
      {
        l[i] = true;
      }
    }
  }
  for (i = 0; i < n; i++)
    if (l[i])
      r++;
  cout << r << endl;
  for (i = 0; i < n; i++)
    if (l[i])
      cout << i + 1 << " ";
  cout << endl;
  return 0;
}
