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
  int n, c, i, r = 0;
  cin >> n >> c;
  vector<int> v(n);
  for (i = 0; i < n; i++)
    scanf("%d", &v[i]);
  for (i = 0; i < n - 1; i++)
    r = max(r, v[i] - v[i + 1]);
  printf("%d\n", max(r - c, 0));

  return 0;
}
