#include <iostream>

using namespace std;

int main()
{
  int a, b, r1 = 0, r2 = 0, r3 = 0, i;
  cin >> a >> b;
  for (i = 1; i <= 6; i++)
  {
    if (abs(a - i) < abs(b - i))
      r1++;
    else if (abs(a - i) > abs(b - i))
      r3++;
    else
      r2++;
  }
  cout << r1 << " " << r2 << " " << r3 << endl;
  return 0;
}
