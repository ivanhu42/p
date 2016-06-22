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
  double r, x1, y1, x2, y2, rez;
  cin >> r >> x1 >> y1 >> x2 >> y2;
  rez = ceil(sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) / (2 * r));
  cout << rez << endl;

  return 0;
}
