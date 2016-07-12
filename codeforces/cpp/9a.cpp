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
    int a, b;
    cin >> a >> b;
    a = 6 - max(a, b) + 1;
    if (a == 1 || a == 5)
        cout << a << "/" << 6 << endl;
    else if (a == 0 || a == 6)
        cout << a / 6 << "/" << 1 << endl;
    else if (a == 2 || a == 4)
        cout << a / 2 << "/" << 3 << endl;
    else
        cout << "1/2" << endl;
    return 0;
}

