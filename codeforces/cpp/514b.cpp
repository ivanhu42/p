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
    int n, i, remain, r = 0, k;
    double x0, y0, x, y;
    pair<double, double> p0;
    vector<pair<double, double> > v0;
    cin >> n >> x0 >> y0;
    remain = n;
    vector<bool> des(n, false);
    for (i = 0; i != n; i++)
    {
        cin >> x >> y;
        p0.first = x;
        p0.second = y;
        v0.push_back(p0);
    }
    while (remain != 0)
    {
        for (i = 0; i != n; i++)
        {
            if (!des[i])
            {
                r++;
                k = i;
                des[i] = true;
                remain--;
                break;
            }
        }
        for (i = k + 1; i < n; i++)
        {
            if (!des[i])
            {
                if ((y0-v0[k].second) * (x0-v0[i].first) == (y0-v0[i].second) * (x0-v0[k].first))
                {
                    des[i] = true;
                    remain--;
                }
            }
        }
    }
    cout << r << endl;
    return 0;
}

