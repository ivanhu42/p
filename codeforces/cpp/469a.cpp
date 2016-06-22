#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, p, q, i, level;
  cin >> n;
  vector<bool> v(n, false);
  cin >> p;
  for(i = 0; i < p; i++)
  {
    cin >> level;
    v[level - 1] = true;
  }
  cin >> q;
  for(i = 0; i < q; i++)
  {
    cin >> level;
    v[level - 1] = true;
  }
  for(i = 0; i < n; i++)
  {
    if(!v[i])
    {
      cout << "Oh, my keyboard!" << endl;
      return 0;
    }
  }
  cout << "I become the guy." << endl;
  return 0;
}
