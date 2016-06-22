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
  int n, m11, m12, m21, m22, m31, m32;
  cin >> n >> m11 >> m12 >> m21 >> m22 >> m31 >> m32;
  if (m11 + m21 + m31 == n)
    printf("%d %d %d\n", m11, m21, m31);
  else
  {
    if (m12 + m21 + m31 >= n)
      printf("%d %d %d\n", n - m21 - m31, m21, m31);
    else
    {
      if (m12 + m22 + m31 >= n)
        printf("%d %d %d\n", m12, n - m12 - m31, m31);
      else
        printf("%d %d %d\n", m12, m22, n - m12 - m22);
    }
  }

  return 0;
}
