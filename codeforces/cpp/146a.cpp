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
  pair<int, int> s1(0, 0);
  pair<int, int> s2(0, 0);
  string str;
  cin >> n >> str;
  for (i = 0; i != n / 2; i++)
  {
    if (str[i] == '4')
      s1.first++;
    else if (str[i] == '7')
      s1.second++;
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  for (i = n / 2; i != n; i++)
  {
    if (str[i] == '4')
      s2.first++;
    else if (str[i] == '7')
      s2.second++;
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  if (s1.first == s2.first && s1.second == s2.second)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
