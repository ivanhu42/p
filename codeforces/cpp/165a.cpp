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
    pair<int, int> pt;
    vector<pair<int, int> > cor;
    vector<bool> row(2001, false);
    vector<vector<bool> > all(2001, row);
    int n, x, y, i;
    cin >> n;
    for (i = 0; i != n; i++)
    {
        cin >> x >> y;
        x += 1000;
        y += 1000;
        pt.first = x;
        pt.second = y;
        all[y][x] = true;
        cor.push_back(pt);
    }
    int r = 0, xt, yt, j;
    vector<int> rez(4, false);
    for (i = 0; i != n; i++)
    {
        xt = cor[i].first;
        yt = cor[i].second;
        for (j = 0; j <= 3; j++)
        {
            rez[j] = false;
        }
        for (j = 0; j < xt; j++)
        {
            if (all[yt][j])
            {
                rez[0] = true;
                break;
            }
        }
        for (j = xt+1; j <= 2000; j++)
        {
            if (all[yt][j])
            {
                rez[1] = true;
                break;
            }
        }
        for (j = 0; j < yt; j++)
        {
            if (all[j][xt])
            {
                rez[2] = true;
                break;
            }
        }
        for (j = yt+1; j <= 2000; j++)
        {
            if (all[j][xt])
            {
                rez[3] = true;
                break;
            }
        }
        if (rez[0] && rez[1] && rez[2] && rez[3])
        {
            r++;
        }
    }
    cout << r << endl;
    return 0;
}

