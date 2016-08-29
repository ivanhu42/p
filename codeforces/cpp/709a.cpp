#include <iostream>

using namespace std;

int main ()
{
    int n, b, d, a, w = 0, r = 0;
    cin >> n >> b >> d;
    while (n--)
    {
        cin >> a;
        if (a <= b)
        {
            w += a;
        }
        if (w > d)
        {
            w = 0;
            r++;
        }
    }
    cout << r << endl;
    return 0;
}
