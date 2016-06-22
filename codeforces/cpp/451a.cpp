#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, m, r;
  cin >> n >> m;
  r = min(m, n);
  if (r % 2 == 0)
  {
    cout << "Malvika" << endl;
    return 0;
  }
  else
  {
    cout << "Akshat" << endl;
    return 0;
  }
}
