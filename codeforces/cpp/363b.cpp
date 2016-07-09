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
        int n, k, i, r = 0;
        int arr[150000];
        ll a, t0 = 0, t1;
        cin >> n >> k;
        for (i = 0; i != n; i++)
        {
                cin >> a;
                arr[i] = a;
                t0 += arr[i];
                if (i < k)
                        t1 = t0;
                else
                {
                        t0 -= arr[i-k];
                        if (t0 < t1)
                        {
                                r = i - k + 1;
                                t1 = t0;
                        }
                }
        }
        cout << r+1 << endl;
        return 0;
}

