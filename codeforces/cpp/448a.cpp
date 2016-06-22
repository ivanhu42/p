#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, ct = 0, mt = 0, s, i;
  for (i = 0; i < 3; i++)
  {
    cin >> n;
    ct += n;
  }
  for (i = 0; i < 3; i++)
  {
    cin >> n;
    mt += n;
  }
  cin >> s;
  if (s >= (ceil(ct / 5.0) + ceil(mt / 10.0)))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
