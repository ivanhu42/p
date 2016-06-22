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
  int n, i, d, a, b;
  vector<int> rank;
  cin >> n;
  for (i = 0; i != n - 1; i++)
  {
    cin >> d;
    rank.push_back(d);
  }
  cin >> a >> b;
  d = 0;
  for (i = a - 1; i != b - 1; i++)
    d += rank[i];
  cout << d << endl;
  return 0;
}
