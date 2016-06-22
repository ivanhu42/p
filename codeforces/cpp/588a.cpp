#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, a, p, i, m, r = 0;
  cin >> n;
  vector<int> meat(n, 0);
  vector<int> price(n, 0);
  for (i = 0; i < n; i++)
  {
    cin >> a >> p;
    meat[i] = a;
    price[i] = p;
  }
  m = price[0];
  for (i = 0; i < n; i++)
  {
    if (price[i] < m)
      m = price[i];
    r += m * meat[i];
  }
  cout << r << endl;
  return 0;
}
