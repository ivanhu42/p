#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;

int main ()
{
    double a, b, n, x, y, v, t, r;
    cin >> a >> b >> n;
    n--;
    cin >> x >> y >> v;
    r = sqrt((a - x) * (a - x) + (b - y) * (b - y)) / v;
    while (n--)
    {
        cin >> x >> y >> v;
        t = sqrt((a - x) * (a - x) + (b - y) * (b - y)) / v;
        r = min(r, t);
    }
    cout << setprecision(10) << r << endl;
}
