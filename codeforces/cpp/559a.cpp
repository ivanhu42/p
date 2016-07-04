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

int calc (int n)
{
  if (n == 1)
    return 1;
  else
    return ((2*n-1) + calc(n-1));
}

int main()
{
  int a0, a1, a2, a3, a4, a5, len, r;
  cin >> a0 >> a1 >> a2 >> a3 >> a4 >> a5;
  len = a0 + a1 + a2;
  r = calc (len) - calc (a0) - calc (a2) - calc (a4);
  cout << r << endl;
  return 0;
}
