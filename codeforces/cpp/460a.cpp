#include <iostream>

using namespace std;

int main()
{
  int n, m, i = 1, r = 0;
  cin >> n >> m;
  while (n > 0)
  {
    n--;
    r++;
    if (i % m == 0)
      n++;
    i++;
  }
  cout << r << endl;
  return 0;
}
