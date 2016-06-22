#include <iostream>
#include <vector>

using namespace std;

int main()
{
  bool r1 = true, r2 = true;
  int n, i, j;
  char c;
  cin >> n;
  vector<char> row(n, 'x');
  vector<vector<char> > board(n, row);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      cin >> c;
      if (c == 'o')
        board[i][j] = 'o';
    }
  }
  for (i = 0; i < n; i++)
  {
    if (r1)
    {
      for (j = 0; j < n - i; j++)
      {
        if (board[i][j] != board[n - 1 - j][n - 1 - i])
        {
          r1 = false;
          break;
        }
      }
    }
    else
    {
      break;
    }
  }
  for (i = 0; i < n; i++)
  {
    if (r2)
    {
      for (j = i; j < n; j++)
      {
        if (board[i][j] != board[j][i])
        {
          r2 = false;
          break;
        }
      }
    }
    else
    {
      break;
    }
  }
  if (r1 && r2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
