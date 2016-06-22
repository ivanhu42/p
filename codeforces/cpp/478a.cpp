#include <iostream>

using namespace std;

int main()
{
  int i = 5, r = 0, c;
  while (i--)
  {
    cin >> c;
    r += c;
  }
  if (r == 0 || r % 5 != 0)
    cout << -1 << endl;
  else
    cout << r / 5 << endl;
  return 0;
}
