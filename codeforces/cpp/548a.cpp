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
  int n, l, i, j, k;
  string str;
  cin >> str >> n;
  l = str.size();
  if (l % n != 0)
    cout << "NO" << endl;
  else
  {
    if (l == n)
      cout << "YES" << endl;
    else
    {
      k = l / n;
      for (i = 0; i < n; i++)
      {
        for (j = k * i; j < k * (i + 1); j++)
          if (str[j] != str[k * (i + 1) - 1 + k * i - j])
          {
            cout << "NO" << endl;
            return 0;
          }
      }
      cout << "YES" << endl;
    }
  }
  return 0;
}
