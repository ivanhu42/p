#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int n, i, j, space;
  cin >> n;
  for (i = 0; i < 2 * n; i++)
    cout << " ";
  cout << 0 << endl;
  for (i = 1; i < 2 * n; i++)
  {
    space = abs(n - i) * 2;
    for (j = 0; space > 0 && j < space; j++)
      cout << " ";
    cout << 0 << " ";
    for (j = 1; j < n - abs(n - i); j++)
      cout << j << " ";
    for (j = n - abs(n - i); j > 0; j--)
      cout << j << " ";
    cout << 0 << endl;
  }
  for (i = 0; i < 2 * n; i++)
    cout << " ";
  cout << 0 << endl;
  return 0;
}
