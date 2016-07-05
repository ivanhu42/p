#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  int n, d, i, r = 0, tr = 0;
  bool win;
  string str;
  cin >> n >> d;
  for (i = 0; i != d; i++)
  {
    win = false;
    cin >> str;
    for (char c : str)
    {
      if (c == '0')
      {
        win = true;
        break;
      }
    }
    if (win)
      tr++;
    else
      tr = 0;
    r = max(r, tr);
  }
  cout << r << endl;
  return 0;
}
