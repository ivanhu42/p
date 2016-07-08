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

int r[2000], v[2000];

int depth (int i)
{
        if (r[i] == 0)
                r[i] = 1 + depth(v[i]-1);
        return r[i];
}

int main()
{
        int n, i, a, rez = 0;
        cin >> n;
        for (i = 0; i != n; i++)
        {
                cin >> a;
                if (a == -1)
                        r[i] = 1;
                v[i] = a;
        }
        for (i = 0; i != n; i++)
                if (r[i] == 0)
                        r[i] = 1 + depth (v[i]-1);
        for (i = 0; i != n; i++)
                rez = max (rez, r[i]);
        cout << rez << endl;
        return 0;
}

