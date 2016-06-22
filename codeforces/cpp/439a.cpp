#include <iostream>

using namespace std;

int main()
{
  int n, d, i, a, s = 0;
  cin >> n >> d;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    s += a;
  }
  s += (n - 1) * 10;
  if (s > d)
    cout << -1 << endl;
  else if (s == d)
    cout << (n - 1) * 2 << endl;
  else
    cout << (n - 1) * 2 + (d - s) / 5 << endl;
  return 0;
}
