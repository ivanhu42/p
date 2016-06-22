#include <iostream>

using namespace std;

int main()
{
  int n, i, a1, a2, a3, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> a1 >> a2 >> a3;
    if (a1 + a2 + a3 >= 2)
      r++;
  }
  cout << r << endl;
  return 0;
}
