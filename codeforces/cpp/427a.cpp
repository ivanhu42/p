#include <iostream>

using namespace std;

int main()
{
  int n, i, e, t = 0, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> e;
    if (e < 0)
    {
      if (t + e < 0)
      {
        r += 0 - t - e;
        t = 0;
      }
      else
        t += e;
    }
    else
      t += e;
  }
  cout << r << endl;
  return 0;
}
