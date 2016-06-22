#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int r, c, i, j, m = 0, n = 0;
  char a;
  cin >> r >> c;
  vector<char> row(c, '.');
  vector<vector<char> > cake(r, row);
  vector<bool> v(c, true);
  vector<bool> h(r, true);
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> a;
      cake[i][j] = a;
    }
  }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      if (cake[i][j] == 'S')
      {
        v[j] = false;
        h[i] = false;
      }
    }
  }
  for (i = 0; i < c; i++)
    if (v[i])
      m++;
  for (i = 0; i < r; i++)
    if (h[i])
      n++;
  cout << m * r + n * c - m * n << endl;
  return 0;
}
