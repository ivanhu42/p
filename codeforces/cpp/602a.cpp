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

ll power (ll a, ll n)
{
        if (n == 0)
                return 1;
        else
                return power(a, (n-1)) * a;
}

int main ()
{
        ll n, b, i, a, num1 = 0, num2 = 0;
        cin >> n >> b;
        for (i = 0; i != n; i++)
        {
                cin >> a;
                num1 += (a * power(b, n-i-1));
        }
        cin >> n >> b;
        for (i = 0; i != n; i++)
        {
                cin >> a;
                num2 += (a * power(b, n-i-1));
        }
        if (num1 > num2)
        {
                cout << ">" << endl;
        }
        else if (num1 < num2)
        {
                cout << "<" << endl;
        }
        else
        {
                cout << "=" << endl;
        }
        return 0;
}

