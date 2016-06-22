#include <iostream>

using namespace std;

int main()
{
  int a1, a2, a3, a4, r = 0;
  cin >> a1 >> a2 >> a3 >> a4;
  char c;
  while (cin >> c)
  {
    if (c == '1')
      r += a1;
    else if (c == '2')
      r += a2;
    else if (c == '3')
      r += a3;
    else
      r += a4;
  }
  cout << r << endl;
  return 0;
}
