#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, i, g, g1 = 0, g2 = 0, g3 = 0, g4 = 0, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> g;
    if (g == 1)
      g1++;
    else if(g == 2)
      g2++;
    else if(g == 3)
      g3++;
    else
      g4++;
  }
  r += g4 + g2 / 2;
  g2 = g2 - g2 / 2 * 2;
  if (g1 >= g3)
  {
    r += g3;
    g1 -= g3;
    if(g2 == 0)
      r += ceil(g1 / 4.0);
    else
    {
      r++;
      r += ceil((g1 - 2) / 4.0);
    }
  }
  else
  {
    r += g1;
    g3 -= g1;
    r += g3;
    if(g2 != 0)
      r++;
  }
  cout << r << endl;
  return 0;
}
