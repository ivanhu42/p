#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  float n, i, a, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    r += a;
  }
  cout << setprecision(10) << r / n << endl;
  return 0;
}
