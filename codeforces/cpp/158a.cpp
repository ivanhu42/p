#include <iostream>

using namespace std;

int main()
{
  int n, k, i, r, list[100];
  cin >> n >> k;
  for (i = 0; i < n; i++)
    cin >> list[i];
  r = k;
  if (list[k - 1] == 0)
    for (i = k - 1; i >= 0; i--)
      if (list[i] == 0)
        r--;
  else
    for (i = k; i < n; i++)
      if (list[i] == list[k - 1])
        r++;
  cout << r << endl;
  return 0;
}
