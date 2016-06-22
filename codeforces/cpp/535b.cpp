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
  int l = str.size(), i, r = 0;
  for (i = l - 1; i != -1; i--)
  {
    if (str[i] == '4')
      r += pow(2, l - i - 1);
    else
      r += pow(2, l - i);
  }
  cout << r << endl;
  return 0;
}
