#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, i, a;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  sort(v.begin(), v.end());
  if (v[0] == 1)
    cout << -1 << endl;
  else
    cout << 1 << endl;
}
