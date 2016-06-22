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
  int n, l, i;
  string str;
  cin >> n >> str;
  l = str.size();
  for (i = 0; i != n; i++)
    if (str[i] == '0')
    {
      cout << i + 1 << endl;
      return 0;
    }
  cout << n << endl;

  return 0;
}
