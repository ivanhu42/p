#include <iostream>

using namespace std;

int main()
{
  long long n, m, g1, g2;
  cin >> n >> m;
  g1 = (n - n % m) / m;
  g2 = n - (m - 1);
  cout << g1 * (g1 - 1) / 2 * (m - n % m) + (g1 + 1) * g1 / 2 * (n % m);
  cout << " " << g2 * (g2 - 1) / 2 << endl;
  return 0;
}
