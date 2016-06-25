#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <utility>
#include <cctype>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  int n, i, a, t, r;
  bool stop = false;
  cin >> n;
  vector<int> v;
  for (i = 0; i != n; i++)
  {
    cin >> a;
    v.push_back(a);
  }
  t = v[0];
  while (!stop)
  {
    r = 0;
    for (i = 1; i != n; i++)
    {
      if (v[i] >= t)
        r += v[i] - (t - 1);
    }
    if (r <= t - v[0])
      stop = true;
    else
      t++;
  }
  cout << t - v[0] << endl;
  return 0;
}
