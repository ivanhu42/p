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
    int n, gmax = 0;
    string str, winner;
    map<string, int> map0;
    cin >> n;
    while (n--)
    {
        cin >> str;
        if (map0.find(str) != map0.end())
        {
            map0[str]++;
        }
        else
        {
            map0[str] = 1;
        }
        if (map0[str] > gmax)
        {
            gmax = map0[str];
            winner = str;
        }
    }
    cout << winner << endl;
    return 0;
}

