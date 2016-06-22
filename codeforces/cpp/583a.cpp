#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, a, b;
  cin >> n;
  vector<bool> h(n, true);
  vector<bool> v(n, true);
  vector<int> r;
  for (i = 0; i < n * n; i++)
  {
    cin >> a >> b;
    if (h[a - 1] && v[b - 1])
    {
      r.push_back(i + 1);
      h[a - 1] = false;
      v[b - 1] = false;
    }
  }
  for (i = 0; i < r.size(); i++)
    cout << r[i] << " ";
}
