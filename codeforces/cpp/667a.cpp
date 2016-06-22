#include <iostream>

using namespace std;

int main()
{
  double d, h, v, e, decrease;
  cin >> d >> h >> v >> e;
  decrease = v / (3.1415926 * d * d / 4);
  if (decrease <= e)
    cout << "NO" << endl;
  else
    cout << "YES\n" << h / (decrease - e) << endl;
  return 0;
}
