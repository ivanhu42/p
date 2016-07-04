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
  ll n, m, k, i, ti, tj;
  cin >> n >> m >> k;
  if (n == 1 || m == 1)
  {
    cout << 0 << endl;
    return 0;
  }
  else
  {
    vector<bool> row(m, false);
    vector<vector<bool> > v(n, row);
    for (i = 0; i != k; i++)
    {
      cin >> ti >> tj;
      ti--;
      tj--;
      v[ti][tj] = true;
      if (ti == 0)
      {
        if (tj == 0)
        {
          if (v[0][1] && v[1][0] && v[1][1])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else if (tj == m-1)
        {
          if (v[0][m-2] && v[1][m-1] && v[1][m-2])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else
        {
          if (v[0][tj-1] && v[1][tj-1] && v[1][tj])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[0][tj+1] && v[1][tj] && v[1][tj+1])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
      }
      else if (ti == n-1)
      {
        if (tj == 0)
        {
          if (v[n-1][1] && v[n-2][0] && v[n-2][1])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else if (tj == m-1)
        {
          if (v[n-1][m-2] && v[n-2][m-1] && v[n-2][m-2])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else
        {
          if (v[n-1][tj-1] && v[n-2][tj-1] && v[n-2][tj])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[n-1][tj+1] && v[n-2][tj+1] && v[n-2][tj])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
      }
      else
      {
        if (tj == 0)
        {
          if (v[ti-1][0] && v[ti-1][1] && v[ti][1])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[ti+1][0] && v[ti+1][1] && v[ti][1])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else if (tj == m-1)
        {
          if (v[ti-1][m-1] && v[ti-1][m-2] && v[ti][m-2])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[ti][m-2] && v[ti+1][m-2] && v[ti+1][m-1])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
        else
        {
          if (v[ti-1][tj-1] && v[ti-1][tj] && v[ti][tj-1])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[ti-1][tj+1] && v[ti][tj+1] && v[ti-1][tj])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[ti+1][tj-1] && v[ti+1][tj] && v[ti][tj-1])
          {
            cout << i+1 << endl;
            return 0;
          }
          else if (v[ti+1][tj+1] && v[ti][tj+1] && v[ti+1][tj])
          {
            cout << i+1 << endl;
            return 0;
          }
        }
      }
    }
    cout << 0 << endl;
  }
  return 0;
}
