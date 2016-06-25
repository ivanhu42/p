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
  string str;
  int k, t, i, m = 0, r = 0, l;
  cin >> str >> k;
  vector<int> v;
  for (i = 0; i != 26; i++)
  {
    cin >> t;
    v.push_back(t);
    m = max(m, t);
  }
  l = str.size();
  for (i = 0; i != l; i++)
    r += v[(int) str[i] - 97] * (i + 1);
  for (i = l; i != l + k; i++)
    r += m * (i + 1);

  // for (i = 0; i != l - 1; i++)
  //   r += v[(int) str[i] - 97] * (i + 1);
  // r += (l + l + k - 1) * k / 2 * m + ((int) str[l - 1] - 97) * (l + k);
  cout << r << endl;
  return 0;
}
