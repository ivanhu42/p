#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct l
{
  int p;
  int q;
};

bool s_p (l item1, l item2)
{
  return (item1.p < item2.p);
}

bool s_q (l item1, l item2)
{
  return (item1.q < item2.q);
}

int main()
{
  int n, i, a, b;
  l item;
  cin >> n;
  vector<l> v1(n);
  vector<l> v2(n);
  for (i = 0; i < n; i++)
  {
    cin >> a >> b;
    item.p = a;
    item.q = b;
    v1[i] = item;
    v2[i] = item;
  }
  sort(v1.begin(), v1.end(), s_p);
  sort(v2.begin(), v2.end(), s_q);
  for (i = 0; i < n; i++)
    if (v1[i].p != v2[i].p || v1[i].q != v2[i].q)
    {
      cout << "Happy Alex" << endl;
      return 0;
    }
  cout << "Poor Alex" << endl;
  return 0;
}
