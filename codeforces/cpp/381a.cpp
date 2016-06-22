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
  int n, i, l, s = 0, d = 0, b_i, e_i;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i != n; i++)
    scanf("%d", &v[i]);
  b_i = 0;
  e_i = n - 1;
  l = n / 2;
  for (i = 0; i < l; i++)
  {
    if (v[b_i] > v[e_i])
    {
      s += v[b_i];
      b_i++;
    }
    else
    {
      s += v[e_i];
      e_i--;
    }
    if (v[b_i] > v[e_i])
    {
      d += v[b_i];
      b_i++;
    }
    else
    {
      d += v[e_i];
      e_i--;
    }
  }
  if (n % 2 != 0)
    s += v[b_i];
  printf("%d %d\n", s, d);

  return 0;
}
