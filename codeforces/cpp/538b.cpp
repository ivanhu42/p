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

int to_pow (int a, int b)
{
  int r = 1, i;
  for (i = 0; i != b; i++)
    r *= a;
  return r;
}

string int2str (int n)
{
  string tem, r;
  while (n != 0)
  {
    tem += (char) ((n % 10) + 48);
    n /= 10;
  }
  int l = tem.size(), i;
  for (i = l - 1; i != -1; i--)
    r += tem[i];
  return r;
}

int main()
{
  int n, l, i, tem;
  cin >> n;
  vector<string> v;
  string str;
  while (n != 0)
  {
    tem = 0;
    str = int2str(n);
    l = str.size();
    for (i = 0; i != l; i++)
    {
      if (str[i] != '0')
        tem += to_pow(10, l - i - 1);
    }
    v.push_back(int2str(tem));
    n -= tem;
  }
  tem = v.size();
  cout << tem << endl;
  for (i = 0; i != tem; i++)
    cout << v[i] << " ";
  cout << endl;
  return 0;
}
