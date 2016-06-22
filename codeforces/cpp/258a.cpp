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
  cin >> str;
  int l = str.size(), i, deli = -1;
  for (i = 0; i != l - 1; ++i)
  {
    if (str[i] == '0' && str[i + 1] == '1')
    {
      deli = i;
      break;
    }
  }
  if (deli == -1)
  {
    for (i = 0; i != l - 1; i++)
    {
      cout << str[i];
    }
    cout << endl;
  }
  else
  {
    for (i = 0; i != l; i++)
    {
      if (i != deli)
      {
        cout << str[i];
      }
    }
    cout << endl;
  }

  return 0;
}
