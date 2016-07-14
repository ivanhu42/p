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

int main ()
{
    int n, i_l = 0, i_r = 0, b = 0, r = 0;
    ll t, tt, buf = 0;
    vector<ll> ts;
    cin >> n >> t;
    for (i_l = 0; i_l != n; i_l++)
    {
        cin >> tt;
        ts.push_back(tt);
    }
    i_l = 0;
    while (i_l < n && i_r < n)
    {
        while (buf <= t && i_r < n)
        {
            b++;
            buf += ts[i_r];
            i_r++;
        }
        if (buf > t)
        {
            r = max (r, b - 1);
        }
        else
        {
            r = max (r, b);
        }
        while (buf > t && i_l < n)
        {
            b--;
            buf -= ts[i_l];
            i_l++;
        }
    }
    cout << r << endl;
    return 0;
}

