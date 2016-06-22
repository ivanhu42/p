#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
  float a, b, c, r1, r2 = 0;
  cin >> a >> b >> c;
  r1 = (0 - 1) * (b + pow(b * b - 4 * a * c, 0.5)) / (2 * a);
  r2 = (0 - 1) * (b - pow(b * b - 4 * a * c, 0.5)) / (2 * a);
  cout << setprecision(16) << max(r1, r2) << endl;
  cout << setprecision(16) << min(r1, r2) << endl;
  return 0;
}
