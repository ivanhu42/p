#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  long long n, x, i;
  cin >> n;
  vector<long long> city(n, 0);
  for (i = 0; i < n; i++)
  {
    cin >> x;
    city[i] = x;
  }
  cout << city[1] - city[0] << " " << city[n - 1] - city[0] << endl;
  for (i = 1; i < n - 1; i++)
    cout << min(city[i] - city[i - 1], city[i + 1] - city[i]) << " " << max(city[i] - city[0], city[n - 1] - city[i]) << endl;
  cout << city[n - 1] - city[n - 2] << " " << city[n - 1] - city[0] << endl;
  return 0;
}
