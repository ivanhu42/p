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
        ll n, k, i, h;
        ll arr[150000];
        ll rez[150000];
        rez[0] = 0;
        cin >> n >> k;
        if (k == n)
        {
                cout << 1 << endl;
        }
        else
        {
                for (i = 0; i != n; i++)
                {
                        cin >> h;
                        arr[i] = h;
                        if (i < k)
                        {
                                rez[0] += h;
                        }
                }
                for (i = 1; k-1+i != n; i++)
                        rez[i] = rez[i-1] + arr[k-1+i] - arr[-1+i];
                ll t = rez[0];
                ll r = 0;
                for (i = 1; k-1+i != n; i++)
                {
                        if (rez[i] < t)
                        {
                                t = rez[i];
                                r = i;
                        }
                }
                cout << r+1 << endl;
        }
        return 0;
}

