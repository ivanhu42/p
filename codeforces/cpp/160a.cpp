#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, i, coin, s = 0, r = 0;
  vector<int> coins;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> coin;
    coins.push_back(coin);
    s += coin;
  }
  sort(coins.begin(), coins.end());
  for (i = n - 1; i >= 0; i--)
  {
    r += coins[i];
    if ((double) r > (s / 2.0))
    {
      cout << n - i << endl;
      break;
    }
  }
  return 0;
}
