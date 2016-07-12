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
    int a, b, c, t, r0 = 0, r1 = 0;
    cin >> a >> b >> c;
    cin >> t;
    if (t < a)
        r0 += (a - t) / 2;
    else
        r1 += t - a;
    cin >> t;
    if (t < b)
        r0 += (b - t) / 2;
    else
        r1 += t - b;
    cin >> t;
    if (t < c)
        r0 += (c - t) / 2;
    else
        r1 += t - c;
    if (r0 >= r1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

