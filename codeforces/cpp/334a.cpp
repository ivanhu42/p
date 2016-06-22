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
  int n, i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n / 2; j++)
      printf("%d %d ", 2 * n * j + i + 1, 2 * n * (j + 1) - i);
    printf("\n");
  }

  return 0;
}
