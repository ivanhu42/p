#include <iostream>

using namespace std;

int main()
{
  int n, i = 0, X = 0, Y = 0, Z = 0;
  cin >> n;
  while (i < n)
  {
    int x = 0, y = 0, z = 0;
    cin >> x >> y >> z;
    X += x;
    Y += y;
    Z += z;
    i++;
  }
  if (X == 0 && Y == 0 && Z == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
