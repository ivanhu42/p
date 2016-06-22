#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long d1, d2, d3, r1, r2, r3, r4;
  cin >> d1 >> d2 >> d3;
  r1 = 2 * (d1 + d2);
  r2 = 2 * (d1 + d3);
  r3 = 2 * (d2 + d3);
  r4 = d1 + d2 + d3;
  cout << min(min(r1, r2), min(r3, r4)) << endl;
  return 0;
}
