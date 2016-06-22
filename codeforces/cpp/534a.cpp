#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  int n, i = 1;
  cin >> n;
  if (n == 1)
    cout << "1\n1" << endl;
  else if (n == 2)
    cout << "1\n1" << endl;
  else if (n == 3)
    cout << "2\n1 3" << endl;
  else if (n == 4)
    cout << "4\n3 1 4 2" << endl;
  else
  {
    cout << n << endl;
    while (i <= n)
    {
      cout << i << " ";
      i += 2;
    }
    i = 2;
    while (i <= n)
    {
      cout << i << " ";
      i += 2;
    }
    cout << endl;
  }
  return 0;
}
