#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long n, i, e;
  cin >> n;
  vector<long long> l1(n, 0);
  vector<long long> l2(n - 1, 0);
  vector<long long> l3(n - 2, 0);
  for (i = 0; i < n; i++)
  {
    cin >> e;
    l1[i] = e;
  }
  sort(l1.begin(), l1.end());
  for (i = 0; i < n - 1; i++)
  {
    cin >> e;
    l2[i] = e;
  }
  sort(l2.begin(), l2.end());
  for (i = 0; i < n - 2; i++)
  {
    cin >> e;
    l3[i] = e;
  }
  sort(l3.begin(), l3.end());
  if (l1[n - 1] == l2[n - 2])
  {
    for (i = 0; i < n - 1; i++)
    {
      if (l1[i] != l2[i])
      {
        cout << l1[i] << endl;
        break;
      }
      if (i == n - 2 && l1[i] == l2[i])
        cout << l1[n - 1] << endl;
    }
  }
  else
  {
    cout << l1[n - 1] << endl;
  }
  if (l2[n - 2] == l3[n - 3])
  {
    for (i = 0; i < n - 2; i++)
    {
      if (l2[i] != l3[i])
      {
        cout << l2[i] << endl;
        break;
      }
      if (i == n - 3 && l2[i] == l3[i])
        cout << l2[n - 2] << endl;
    }
  }
  else
  {
    cout << l2[n - 2] << endl;
  }
  return 0;
}
