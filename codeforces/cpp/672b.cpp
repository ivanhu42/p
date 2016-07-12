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
    string str;
    int l, i, r = 0;
    cin >> l >>  str;
    vector<int> v(26, 0);
    if (l > 26)
    {
        cout << -1 << endl;
    }
    else
    {
        for (i = 0; i != l; i++)
        {
            v[(int) str[i] - 97]++;
        }
        for (i = 0; i != 26; i++)
        {
            if (v[i] > 1)
            {
                r += v[i] - 1;
            }
        }
        cout << r << endl;
    }
    return 0;
}

