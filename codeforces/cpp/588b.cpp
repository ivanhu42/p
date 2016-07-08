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

int main()
{
        ll n, i = 2, r = 1;
        cin >> n;
        vector<ll> v;
        while (i <= n)
        {
                if (i > sqrt(n))
                {
                        r *= n;
                        break;
                }
                if (n % i == 0)
                {
                        r *= i;
                        while (n % i == 0)
                                n /= i;
                }
                else
                {
                        i++;
                }
        }
        cout << r << endl;
        return 0;
}

