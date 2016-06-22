#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
  long long n, a, i, r = 0;
  cin >> n;
  vector<long long> mo;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (a % 2 == 1)
      mo.push_back(a);
    r += a;
  }
  sort(mo.begin(), mo.end());
  if (r % 2 == 0)
    cout << r << endl;
  else
    cout << r - mo[0] << endl;
}
