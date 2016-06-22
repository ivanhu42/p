#include <iostream>

using namespace std;

int main()
{
  long long n, m, p = 1, r = 0, a;
  cin >> n >> m;
  while (m--)
  {
    cin >> a;
    if (a >= p)
      r += a - p;
    else
      r += n - (p - a);
    p = a;
  }
  cout << r << endl;
  return 0;
}
