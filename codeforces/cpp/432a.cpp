#include <iostream>

using namespace std;

int main()
{
  int n, k, i, t, r = 0;
  cin >> n >> k;
  k = 5 - k;
  while (n--)
  {
    cin >> i;
    if (i <= k)
      r++;
  }
  cout << r / 3 << endl;
  return 0;
}
