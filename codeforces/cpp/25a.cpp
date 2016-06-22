#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, a, i, r = 0;
  cin >> n;
  vector<int> v(n, 0);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a % 2;
    r += v[i];
  }
  if (r > 1)
    r = 0;
  for (i = 0; i < n; i++)
    if (v[i] == r)
    {
      cout << i + 1 << endl;
      return 0;
    }
}
