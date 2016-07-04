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
  int n, i, t, r = 0;
  vector<int> v;
  cin >> n;
  for (i = 0; i != n; i++)
  {
    cin >> t;
    if (t == 1)
      r += 2;
    v.push_back(t);
  }
  if (r != 0)
    r--;
  for (i = 1; i != n; i++)
  {
    if (v[i] == 1 && v[i-1] == 1)
      r--;
  }
  cout << r << endl;

  return 0;
}
