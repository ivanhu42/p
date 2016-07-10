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
        int n, k, i;
        cin >> n >> k;
        for (i = 0; i != k; i++)
        {
                if (i % 2 == 0)
                {
                        cout << i / 2 + 1 << " ";
                }
                else
                {
                        cout << 1 + n - ((i - 1) / 2 + 1) << " ";
                }
        }
        if (k % 2 == 0)
        {
                for (i = (n - k / 2); (i >= k / 2 + 1); i--)
                {
                        cout << i << " ";
                }
        }
        else
        {
                for (i = (k / 2 + 2); i <= (2 + n - (k / 2 + 2)); i++)
                {
                        cout << i << " ";
                }
        }
        
        return 0;
}

