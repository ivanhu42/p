#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, t, i;
  cin >> n >> t;
  if (t == 10) {
    if (n == 1)
      cout << "-1" << endl;
    else
    {
      cout << "1";
      for (i = 1; i < n; i++)
        cout << "0";
      cout << endl;
    }
  }
  else
  {
    cout << t;
    for (int i = 1; i < n; i++)
      cout << "0";
    cout << endl;
  }
  return 0;
}
