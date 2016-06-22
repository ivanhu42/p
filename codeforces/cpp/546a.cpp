#include <iostream>

using namespace std;

int main()
{
  int k, n, w, r;
  cin >> k >> n >> w;
  r = (1 + w) * w / 2 * k;
  if (r > n)
    cout << r - n << endl;
  else
    cout << 0 << endl;
  return 0;
}
