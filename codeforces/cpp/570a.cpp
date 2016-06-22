#include <iostream>
#include <vector>

using namespace std;

int main()
{
  long long n, m, i, j, v, win = 0;
  cin >> n >> m;
  vector<long long> winner(n, 0);
  vector<long long> vote(n, 0);
  vector<vector<long long> > city(m);
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      cin >> v;
      vote[j] = v;
    }
    city[i] = vote;
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (city[i][j] > city[i][win])
      {
        win = j;
      }
    }
    winner[win]++;
    win = 0;
  }
  win = 0;
  for (i = 1; i < n; i++)
  {
    if (winner[i] > winner[win])
    {
      win = i;
    }
  }
  cout << win + 1 << endl;
  return 0;
}
