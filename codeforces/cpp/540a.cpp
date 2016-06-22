#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
  int n, i, m, r = 0;
  string s1, s2;
  cin >> n;
  cin >> s1 >> s2;
  if (s1 == s2)
  {
    cout << 0 << endl;
    return 0;
  }
  for (i = 0; i < n; i++)
  {
    m = abs((int)s1[i] - (int)s2[i]);
    r += min(10 - m, m);
  }
  cout << r << endl;
  return 0;
}
