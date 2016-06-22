#include <iostream>

using namespace std;

int main()
{
  int n, a, b, r;
  cin >> n >> a >> b;
  r = a + b;
  if (r > n)
    while (r > n)
      r -= n;
  else if (r < 1)
    while (r < 1)
      r += n;
  cout << r << endl;
  return 0;
}
