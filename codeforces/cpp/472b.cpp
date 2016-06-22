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
  int n, k, i, f, r = 0;
  cin >> n >> k;
  vector<int> v;
  for (i = 0; i != n; i++)
  {
    cin >> f;
    f--;
    v.push_back(f);
  }
  if (n % k != 0)
  {
    for (i = 0; i != k - n % k; i++)
      v.push_back(0);
  }
  sort(v.begin(), v.end());
  f = v.size();
  for (i = 0; i != f / k; i++)
    r += 2 * v[i * k + k - 1];
  cout << r << endl;
  return 0;
}
