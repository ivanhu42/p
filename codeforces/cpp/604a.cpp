#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include <utility>
#include <cctype>

using namespace std;
typedef long double db;
typedef long long ll;

int main()
{
  vector<double> m, w, r;
  double hs, hu, i, rez = 0;
  for (i = 0; i != 5; i++)
  {
    cin >> hs;
    m.push_back(hs);
  }
  for (i = 0; i != 5; i++)
  {
    cin >> hs;
    w.push_back(hs);
  }
  cin >> hs >> hu;
  for (i = 0; i != 5; i++)
    r.push_back(max(0.3 * 500 * (i + 1), (1 - m[i] / 250) * 500 * (i + 1) - 50 * w[i]));
  for (i = 0; i != 5; i++)
    rez += r[i];
  rez = rez + 100 * hs - 50 * hu;
  cout << rez << endl;
  return 0;
}
