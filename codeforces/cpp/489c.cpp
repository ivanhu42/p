#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int m, s, i, t;
  cin >> m >> s;
  if (m == 1 && s < 10)
  {
    cout << s << " " << s << endl;
    return 0;
  }
  vector<int> n1(m, 0);
  vector<int> n2(m, 0);
  n2[0] = 1;
  t = s;
  i = 0;
  while (t > 0)
  {
    n1[i]++;
    t--;
    if (n1[i] == 9)
      i = min(++i, m - 1);
  }
  if (n1[m - 1] > 9 || n1[0] == 0)
  {
    cout << "-1 -1" << endl;
    return 0;
  }
  t = s - 1;
  i = m - 1;
  while (t > 0)
  {
    n2[i]++;
    t--;
    if (n2[i] == 9)
      i = max(--i, 0);
  }
  for (i = 0; i < m; i++)
    cout << n2[i];
  cout << " ";
  for (i = 0; i < m; i++)
    cout << n1[i];
  cout << endl;
  return 0;
}
