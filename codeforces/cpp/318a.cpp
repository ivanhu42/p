#include <iostream>

using namespace std;

int main()
{
  long long n, k, r;
  cin >> n >> k;
  if (n % 2 == 0)
  {
    if(k <= n / 2)
      r = 2 * k - 1;
    else
      r = 2 * (k - n / 2);
  }
  else
  {
    if(k <= n / 2 + 1)
      r = 2 * k - 1;
    else
      r = 2 * (k - n / 2 - 1);
  }
  cout << r << endl;
  return 0;
}
