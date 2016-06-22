#include <iostream>
#include <string>

using namespace std;

int main()
{
  string dot = ".", hash = "#";
  int n, m, i, j;
  cin >> n >> m;
  for (i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (j = 0; j < m; j++)
        cout << hash;
      cout << endl;
    }
    else
      if (i % 4 == 1)
      {
        for (j = 0; j < m - 1; j++)
          cout << dot;
        cout << hash << endl;
      }
      else
      {
        cout << hash;
        for (j = 0; j < m - 1; j++)
          cout << dot;
        cout << endl;
      }
  }
  return 0;
}
