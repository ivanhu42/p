#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, i, a;
  cin >> n;
  int l[n];
  for (i = 0; i < n; i++)
  {
    cin >> a;
    l[i] = a;
  }
  sort(l, l + n);
  for (i = 0; i < n; i++)
    cout << l[i] << " ";
  cout << endl;
  return 0;
}
