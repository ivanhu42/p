#include<iostream>

using namespace std;

int main()
{
    int n, mi, ci, m, c;
    cin >> n;
    mi = ci = m = c = 0;
    while (n--)
    {
        cin >> mi >> ci;
        if (mi > ci)
            m++;
        else if (mi < ci)
            c++;
    }
    if (m > c)
        cout << "Mishka";
    else if (m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}
