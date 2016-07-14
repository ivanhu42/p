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
    int n, s, f, t;
    cin >> n >> s;
    while (n--)
    {
        cin >> f >> t;
        s += max(0, t - s + f);
    }
    cout << s << endl;
    return 0;
}

