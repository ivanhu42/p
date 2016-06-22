#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, j, a, k = 0;
  cin >> n;
  vector<bool> r(n, true);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cin >> a;
      if (a == 1 || a == 3)
      {
        r[i] = false;
      }
    }
  }
  for (i = 0; i < n; i++)
    if (r[i])
      k++;
  cout << k << endl;
  for (i = 0; i < n; i++)
    if (r[i])
      cout << i + 1 << " ";
  cout << endl;
  return 0;
}
