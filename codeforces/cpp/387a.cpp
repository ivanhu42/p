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
    int he, me, hp, mp, hb, mb;
    scanf("%d:%d", &he, &me);
    scanf("%d:%d", &hp, &mp);
    hb = he * 60 + me - hp * 60 - mp;
    if (hb < 0)
        hb = 1440 + hb;
    mb = hb % 60;
    hb /= 60;
    if (hb < 10)
    {
        if (mb < 10)
        {
            cout << "0" << hb << ":0" << mb << endl;
        }
        else
        {
            cout << "0" << hb << ":" << mb << endl;
        }
    }
    else
    {
        if (mb < 10)
        {
            cout << hb << ":0" << mb << endl;
        }
        else
        {
            cout << hb << ":" << mb << endl;
        }
    }
    return 0;
}

