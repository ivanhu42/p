#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
  int n, l, i, a[1000], r;
  cin >> n >> l;
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  sort(a, a + n);
  r = 2 * max(a[0] - 0, l - a[n - 1]);
  for (i = 0; i < n - 1; i++)
    r = max(r, a[i + 1] - a[i]);
  printf("%.10f\n", r / 2.0);
  return 0;
}
