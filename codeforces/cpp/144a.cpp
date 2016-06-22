#include <iostream>

using namespace std;

int main()
{
  int n, i, a, minv = 101, maxv = 0, mini = 0, maxi = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> a;
    if (a > maxv)
    {
      maxi = i;
      maxv = a;
    }
    if (a <= minv)
    {
      mini = i;
      minv = a;
    }
  }
  if (maxi < mini)
    cout << maxi + n - 1 - mini << endl;
  else if (maxi > mini)
    cout << maxi + n - 1 - mini - 1 << endl;
  else if (maxi == 0 && mini == n - 1)
    cout << 0 << endl;
}
