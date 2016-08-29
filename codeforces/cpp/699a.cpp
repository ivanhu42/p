#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    long long n, i, x1, x2, rez = 1000000001;
    char c;
    vector<char> dir;
    cin >> n;
    for (i = 0; i != n; i++)
    {
        cin >> c;
        dir.push_back(c);
    }
    cin >> x1;
    for (i = 0; i != n - 1; i++)
    {
        cin >> x2;
        if (dir[i] == 'R' && dir[i+1] == 'L')
        {
            rez = min(rez, (x2 - x1) / 2);
        }
        x1 = x2;
    }
    if (rez != 1000000001)
    {
        cout << rez << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
