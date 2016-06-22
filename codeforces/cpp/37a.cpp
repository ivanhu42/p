#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, l, m = 0, t = 0;
  vector<int> v(1000, 0);
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> l;
    v[l - 1]++;
  }
  for (i = 0; i < 1000; i++)
  {
    if (v[i] > 0)
      t++;
    if (v[i] > m)
      m = v[i];
  }
  cout << m << " " << t << endl;
  return 0;
}
