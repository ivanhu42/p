#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long a, b, r = 0, tem;
  cin >> a >> b;
  while (true)
  {
    if (a % b == 0)
    {
      r += a / b;
      break;
    }
    else
    {
      tem = a;
      r += a / b;
      a = max(b, tem % b);
      b = min(b, tem % b);
    }
  }
  cout << r << endl;
  return 0;
}
