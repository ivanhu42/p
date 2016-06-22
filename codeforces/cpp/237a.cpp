#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, i, r = 1, mr = 1, h, m, ph, pm;
  cin >> n;
  cin >> ph >> pm;
  n--;
  while (n--)
  {
    cin >> h >> m;
    if (h == ph && m == pm)
    {
      r++;
      mr = max(r, mr);
    }
    else
    {
      mr = max(r, mr);
      r = 1;
      ph = h;
      pm = m;
    }
  }
  cout << mr << endl;
  return 0;
}
