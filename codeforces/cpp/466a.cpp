#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n ,m ,a, b, t1, t2, s;
  cin >> n >> m >> a >> b;
  if (n % m == 0)
    t1 = n / m;
  else
    t1 = n / m + 1;
  s = t1 * b;
  while (t1 > -1)
  {
    t2 = max(0, n - t1 * m);
    s = min(t1 * b + t2 * a, s);
    t1--;
  }
  cout << s << endl;
  return 0;
}
