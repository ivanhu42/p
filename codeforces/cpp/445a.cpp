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
    int n, m, i, j;
    vector<string> arr;
    cin >> n >> m;
    string r;
    for (i = 0; i != n; i++)
    {
        cin >> r;
        arr.push_back(r);
    }
    r = "";
    for (i = 0; i != n; i++)
    {
        for (j = 0; j != m; j++)
        {
            if (arr[i][j] == '.')
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                        r.append("B");
                    else
                        r.append("W");
                }
                else
                {
                    if (j % 2 == 0)
                        r.append("W");
                    else
                        r.append("B");
                }
            }
            else
                r.append("-");
        }
        r.append("\n");
    }
    cout << r << endl;
    return 0;
}

