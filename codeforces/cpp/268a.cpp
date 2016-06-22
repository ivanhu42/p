#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, j, h, g, r = 0;
  vector<int> host;
  vector<int> guest;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> h >> g;
    host.push_back(h);
    guest.push_back(g);
  }
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (host[i] == guest[j])
        r++;
  cout << r << endl;
}
