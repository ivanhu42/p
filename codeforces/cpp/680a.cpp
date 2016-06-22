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
  int i, r = 0, a;
  for (i = 0; i != 5; i++)
  {
    cin >> a;
    r += a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  if (v[0] == v[4]) // aaaaa
    r -= v[0] * 3;
  else if (v[0] == v[3] && v[3] != v[4]) // aaaab
    r -= v[0] * 3;
  else if (v[0] != v[1] && v[1] == v[4]) // abbbb
    r -= v[1] * 3;
  else
  {
    if (v[0] == v[2] && v[3] == v[4]) // aaabb
      r -= max(v[0] * 3, v[3] * 2);
    else if (v[0] == v[2] && v[3] != v[4]) // aaabc
      r -= v[0] * 3;
    else if (v[0] == v[1] && v[2] == v[4]) // aabbb
      r -= max(v[0] * 2, v[2] * 3);
    else if (v[0] != v[1] && v[2] == v[4]) // abccc
      r -= v[2] * 3;
    else if (v[1] == v[3]) // abbbc
      r -= v[1] * 3;
    else
    {
      if (v[0] == v[1] && v[2] == v[3]) // aabbc
        r -= max(v[0] * 2, v[2] * 2);
      else if (v[0] == v[1] && v[3] == v[4]) // aabcc
        r -= max(v[0] * 2, v[3] * 2);
      else if (v[1] == v[2] && v[3] == v[4]) // abbcc
        r -= max(v[1] * 2, v[3] * 2);
      else
      {
        if (v[0] == v[1]) // aabcd
          r -= v[0] * 2;
        else if (v[1] == v[2]) // abbcd
          r -= v[1] * 2;
        else if (v[2] == v[3]) // abccd
          r -= v[2] * 2;
        else if (v[3] == v[4]) // abcdd
          r -= v[3] * 2;
      }
    }
  }
  cout << r << endl;
  return 0;
}
