#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, a, i, j, m;
  cin >> n;
  vector<int> r;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    for (j = 0; j < a; j++)
    {
      r.push_back(i + 1);
    }
  }
  cin >> m;
  vector<int> q(m);
  for (i = 0; i < m; i++)
  {
    cin >> a;
    q[i] = a;
  }
  for (i = 0; i < m; i++)
    cout << r[q[i] - 1] << endl;
  return 0;
}
