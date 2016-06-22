#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
  int index;
  int value;
};

bool sort_value (point p1, point p2)
{
  return (p1.value < p2.value);
}

int main()
{
  int n, k, i, a, r = 0;
  cin >> n >> k;
  point t;
  vector<point> v(n);
  vector<int> l;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    t.index = i;
    t.value = a;
    v[i] = t;
  }
  sort(v.begin(), v.end(), sort_value);
  for (i = 0; i < n; i++)
  {
    r += v[i].value;
    if (r <= k)
    {
      l.push_back(v[i].index);
    }
    else
    {
      break;
    }
  }
  cout << l.size() << endl;
  for (i = 0; i < l.size(); i++)
    cout << l[i] + 1 << " ";
  cout << endl;
  return 0;
}
