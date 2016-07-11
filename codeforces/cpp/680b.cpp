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
        int n, a, i, t, r = 0;
        cin >> n >> a;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
                cin >> t;
                r += t;
                v.push_back(t);
        }
        int l = min(n - a, a - 1);
        for (i = 1; i < 1 + l; i++)
        {
                if (v[a - 1 + i] != v[a - 1 - i])
                        r--;
        }
        cout << r << endl;
        return 0;
}

