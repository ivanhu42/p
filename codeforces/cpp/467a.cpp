#include <iostream>

using namespace std;

int main()
{
  int n, i, p, q, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> p >> q;
    if (q - p > 1)
      r++;
  }
  cout << r << endl;
  return 0;
}
