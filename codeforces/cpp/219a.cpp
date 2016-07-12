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
    int n, l, i;
    string str;
    int arr[26] = {0};
    cin >> n >> str;
    l = str.size();
    if (l % n != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        for (i = 0; i != l; i++)
        {
            arr[(int) str[i] - 97]++;
        }
        str = "";
        for (i = 0; i != 26; i++)
        {
            if (arr[i] % n == 0)
                str.append(arr[i] / n, (char) (i + 97));
            else
            {
                cout << -1 << endl;
                return 0;
            }
        }
        while (n--)
            cout << str;
        cout << endl;
    }
    return 0;
}

