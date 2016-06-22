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
  int n, i, key, door, r = 0;
  char k, d;
  string str;
  cin >> n;
  cin >> str;
  vector<int> v(26, 0);
  for (i = 0; i != 2 * n - 2; i += 2)
  {
    key = (int) str[i] - 97;
    door = (int) str[i + 1] - 65;
    v[key]++;
    if (v[door] == 0)
      r++;
    else
      v[door]--;
  }
  cout << r << endl;

  return 0;
}
