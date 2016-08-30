#include <iostream>
#include <vector>

using namespace std;

int pro (char a, char b)
{
    if (a == 'O' && b == 'O')
        return 0;
    else if (a == 'O' && b == 'X')
        return 1;
    else if (a == 'X' && b == 'O')
        return 2;
    else
        return 3;
}

int main ()
{
    int n, i;
    char a, b, c, d, sep;
    bool done = false, r = false;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        cin >> a >> b >> sep >> c >> d;
        v.push_back(pro(a, b));
        v.push_back(pro(c, d));
        if (v[v.size() - 1] == 0 || v[v.size() - 2] == 0)
            r = true;
    }
    if (r)
    {
        cout << "YES" << endl;
        for (i = 0; i != v.size(); i++)
        {
            if (!done)
            {
                if (v[i] == 0)
                {
                    cout << "++";
                    done = true;
                }
                else if (v[i] == 1)
                {
                    cout << "OX";
                }
                else if (v[i] == 2)
                {
                    cout << "XO";
                }
                else
                {
                    cout << "XX";
                }
                if (i % 2 == 0)
                    cout << "|";
                else
                    cout << endl;
            }
            else
            {
                if (v[i] == 0)
                    cout << "OO";
                else if (v[i] == 1)
                    cout << "OX";
                else if (v[i] == 2)
                    cout << "XO";
                else
                    cout << "XX";
                if (i % 2 == 0)
                    cout << "|";
                else
                    cout << endl;
            }
        }
    }
    else
        cout << "NO" << endl;
    return 0;
}
