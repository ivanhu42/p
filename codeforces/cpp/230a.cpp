#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
  int x, y;
};

bool f (point a, point b)
{
  return (a.x < b.x);
}

int main()
{
  point p;
  int s, n, a, b, i;
  cin >> s >> n;
  vector<point> l(n);
  for (i = 0; i < n; i++)
  {
    cin >> a >> b;
    p.x = a;
    p.y = b;
    l[i] = p;
  }
  sort(l.begin(), l.end(), f);
  for (i = 0; i < n; i++)
  {
    if (s > l[i].x)
      s += l[i].y;
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
