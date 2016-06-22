#include <iostream>

using namespace std;

int main()
{
  int n, i, a, b, c, r = 0;
  cin >> n;
  cin >> a;
  b = c = a;
  for (i = 1; i < n; i++)
  {
    cin >> a;
    if (a < b)
    {
      r++;
      b = a;
    }
    else if (a > c)
    {
      r++;
      c = a;
    }
    else
      continue;
  }
  cout << r << endl;
  return 0;
}
