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
  int n, i;
  cin >> n;
  if (n % 2 == 0)
  {
    int t = n / 2;
    for (i = 0; i != t; i++)
      cout << 2 * i + 2 << " " << 2 * i + 1 << " ";
    cout << endl;
  }
  else
    cout << -1 << endl;

  return 0;
}
