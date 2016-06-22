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
  vector<int> v;
  string str;
  cin >> str;
  int l = str.size(), i, lv;
  char tem;
  for (i = 0; i != l; i++)
  {
    if (((int) str[i] - 48) % 2 == 0)
      v.push_back(i);
  }
  lv = v.size();
  if (lv == 0)
  {
    cout << -1 << endl;
    return 0;
  }
  else
  {
    for (i = 0; i != lv; i++)
    {
      if ((int) str[v[i]] - 48 < (int) str[l - 1] - 48)
      {
        tem = str[l - 1];
        str[l - 1] = str[v[i]];
        str[v[i]] = tem;
        break;
      }
      if (i == lv - 1)
      {
        tem = str[l - 1];
        str[l - 1] = str[v[i]];
        str[v[i]] = tem;
      }
    }
  }
  for (i = 0; i != l; i++)
    cout << str[i];
  cout << endl;
  return 0;
}
