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
        int i = 1, r = 0, ti = 0, n, c;
        ll t0, t;
        bool b = false;
        cin >> n >> t >> c;
        for (i = 1; i <= n; i++)
        {
                cin >> t0;
                if (t0 > t)
                {
                        b = true;
                        if (i - ti - 1 >= c)
                        {
                                r += i - ti - c;
                        }
                ti = i;
                }
        }
        if (b)
        {
                if (n - ti >= c)
                {
                        r += n + 1 - ti - c;
                }
        }
        else
        {
                r = n - c + 1;
        }
        cout << r << endl;
        
        return 0;
}

