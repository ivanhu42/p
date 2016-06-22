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
  int n, k, i, j, l, r = 0, tem;
  string str;
  cin >> n >> k;
  for (i = 0; i != n; i++)
  {
    cin >> str;
    l = str.size();
    tem = 0;
    for (j = 0; j != l; j++)
      if (str[j] == '4' || str[j] == '7')
        tem++;
    if (tem <= k)
      r++;
  }
  cout << r << endl;
  return 0;
}
