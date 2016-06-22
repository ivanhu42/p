#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n, i, j, d, s;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    d = n - abs (n / 2 - i) * 2;
    s = (n - d) / 2;
    for (j = 0; j < s; j++)
      cout << "*";
    for (j = 0; j < d; j++)
      cout << "D";
    for (j = 0; j < s; j++)
      cout << "*";
    cout << endl;
  }
  return 0;
}

