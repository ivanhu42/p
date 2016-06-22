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

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  int n, i, a, e = 0, r = 0;
  cin >> n;
  vector<int> v(n+1);
  v[0] = 0;
  for(i = 1; i < n+1; i++)
    scanf("%d", &v[i]);
  for(i = 0; i < n; i++)
  {
    e += v[i] - v[i + 1];
    if (e < 0)
    {
      r += abs(e);
      e = 0;
    }
  }
  printf("%d\n", r);
  return 0;
}
