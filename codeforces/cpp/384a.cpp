#include <iostream>

using namespace std;

int main()
{
  int n, r, i, j;
  cin >> n;
  r = n * n;
  if (r % 2 == 0)
    r = r / 2;
  else
    r = r / 2 + 1;
  cout << r << endl;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if ((i + j) % 2 == 0)
        cout << 'C';
      else
        cout << '.';
    }
    cout << endl;
  }
  return 0;
}
