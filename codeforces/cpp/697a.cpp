#include <iostream>

using namespace std;

int main ()
{
    long long t, s, x;
    cin >> t >> s >> x;
    if (x < t)
        cout << "NO" << endl;
    else if (x == t)
        cout << "YES" << endl;
    else
    {
        if (x - t < s)
            cout << "NO" << endl;
        else
        {
            if ((x - t) % s == 0 || (x - t) % s == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
