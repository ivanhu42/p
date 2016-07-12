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
    int n, i;
    cin >> n;
    vector<int> v(n);
    for (i = 0; i != n; i++)
    {
        scanf("%d", &v[i]);
    }
    sort(v.begin(), v.end());
    while (v[0] != v[n-1])
    {
        for (i = 1; i != n; i++)
        {
            if (v[i] % v[0] != 0)
            {
                v[i] = v[i] % v[0];
            }
            else
                v[i] = v[0];
        }
        sort(v.begin(), v.end());
    }
    cout << v[0] * n << endl;
    return 0;
}

