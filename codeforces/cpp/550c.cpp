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
        char c;
        vector<int> v;
        int t, i, j, k, l;
        while (cin >> c)
        {
                v.push_back((int) c - 48);
        }
        l = v.size();
        if (l == 1)
        {
                t = v[0];
                if (t % 8 == 0)
                {
                        cout << "YES\n" << t << endl;
                }
                else
                {
                        cout << "NO" << endl;
                }
        }
        else if (l == 2)
        {
                if (v[0] % 8 == 0)
                {
                        cout << "YES\n" << v[0] << endl;
                }
                else if (v[1] % 8 == 0)
                {
                        cout << "YES\n" << v[1] << endl;
                }
                else if ((v[0] * 10 + v[1]) % 8 == 0)
                {
                        cout << "YES\n" << v[0] * 10 + v[1] << endl;
                }
                else
                {
                        cout << "NO" << endl;
                }
        }
        else
        {
                for (i = 0; i <= l - 1; i++)
                {
                        if (v[i] % 8 == 0)
                        {
                                cout << "YES\n" << v[i] << endl;
                                return 0;
                        }
                }
                for (i = 0; i <= l - 2; i++)
                {
                        for (j = i + 1; j <= l - 1; j++)
                        {
                                t = v[i] * 10 + v[j];
                                if (t % 8 == 0)
                                {
                                        cout << "YES\n" << t << endl;
                                        return 0;
                                }
                        }
                }
                for (i = 0; i <= l - 3; i++)
                {
                        for (j = i + 1; j <= l - 2; j++)
                        {
                                for (k = j + 1; k <= l - 1; k++)
                                {
                                        t = v[i] * 100 + v[j] * 10 + v[k];
                                        if (t % 8 == 0)
                                        {
                                                cout << "YES\n" << t << endl;
                                                return 0;
                                        }
                                }
                        }
                }
                cout << "NO" << endl;
        }
        return 0;
}

