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
  int n, i, bs, as;
  string str, r = "NO";
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> str >> bs >> as;
    if (bs >= 2400 && as > bs)
      r = "YES";
  }
  cout << r << endl;
  return 0;
}
