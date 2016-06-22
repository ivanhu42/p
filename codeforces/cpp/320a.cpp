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
  int l = str.size(), i;
  if (str[0] != '1')
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
    if (l > 3)
    {
      for (i = 1; i != l; i++)
      {
        if (str[i] != '1' && str[i] != '4')
        {
          cout << "NO" << endl;
          return 0;
        }
      }
      for (i = 1; i != l - 2; i++)
        if (str[i] == '4' && str[i + 1] == '4' && str[i + 2] == '4')
        {
          cout << "NO" << endl;
          return 0;
        }
      cout << "YES" << endl;
    }
    else
    {
      if (str != "1" && str != "14" && str != "144" && str != "111" && str != "114" && str != "141" && str != "11")
        cout << "NO" << endl;
      else
        cout << "YES" << endl;
    }
  }

  return 0;
}
