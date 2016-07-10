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
        string str;
        int n, m, i, j, rez = 0;
        char c;
        vector<string> v;
        vector<bool> r(n, false);
        cin >> n >> m;
        for (i = 0; i != n; i++)
        {
                cin >> str;
                v.push_back(str);
        }
        for (i = 0; i != m; i++)
        {
                c = v[0][i];
                for (j = 1; j != n; j++)
                {
                        if (v[j][i] > c)
                        {
                                c = v[j][i];
                        }
                }
                for (j = 0; j != n; j++)
                {
                        if (v[j][i] == c)
                        {
                                r[j] = true;
                        }
                }
        }
        for (i = 0; i != n; i++)
        {
                if (r[i])
                {
                        rez++;
                }
        }
        cout << rez << endl;
        return 0;
}

