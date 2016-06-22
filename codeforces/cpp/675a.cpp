#include <iostream>

using namespace std;

int main()
{
  long long a, b, c;
  cin >> a >> b >> c;
  if (b > a)
  {
    if (c > 0)
    {
      if ((b - a) % c == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
    else
      cout << "NO" << endl;
  }
  else if (b == a)
    cout << "YES" << endl;
  else
  {
    if (c >= 0)
      cout << "NO" << endl;
    else
    {
      if ((a - b) % c == 0)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    }
  }
  return 0;
}
