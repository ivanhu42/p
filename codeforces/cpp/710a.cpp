#include <iostream>

using namespace std;

int main ()
{
    int x, y;
    char c;
    cin >> c >> y;
    x = c;
    x -= 97;
    y--;
    if (x == 0)
    {
        if (y == 0)
        {
            cout << 3 << endl;
        }
        else if (y == 7)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
    else if (x == 7)
    {
        if (y == 0)
        {
            cout << 3 << endl;
        }
        else if (y == 7)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 5 << endl;
        }
    }
    else
    {
        if (y == 0)
        {
            cout << 5 << endl;
        }
        else if (y == 7)
        {
            cout << 5 << endl;
        }
        else
        {
            cout << 8 << endl;
        }
    }
    return 0;
}
