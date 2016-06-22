#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, r = 0, x1, x2, y1, y2;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    r += (x2 - x1 + 1) * (y2 - y1 + 1);
  }
  cout << r << endl;
  return 0;
}
