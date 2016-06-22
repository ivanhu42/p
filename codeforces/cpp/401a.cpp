#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x, i, a, r = 0;
  cin >> n >> x;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    r += a;
  }
  if (r < 0)
    r = -r;
  if (r % x == 0)
    cout << r / x << endl;
  else
    cout << r / x + 1 << endl;
  return 0;
}
