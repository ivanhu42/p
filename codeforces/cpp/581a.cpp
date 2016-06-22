#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b, r1, r2;
  cin >> a >> b;
  r1 = min(a, b);
  r2 = (max(a, b) - min(a, b)) / 2;
  cout << r1 << " " << r2 << endl;
  return 0;
}
