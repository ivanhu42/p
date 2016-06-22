#include <iostream>

using namespace std;

int main()
{
  int a, b, m, n = 0, r = 0;
  cin >> a >> b;
  m = a;
  while (m > 0)
  {
    r += m;
    n += m;
    m = n / b;
    n = n % b;
  }
  cout << r << endl;
  return 0;
}
