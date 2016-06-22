#include <iostream>

using namespace std;

int main()
{
  int n, i = 1, r = 1;
  cin >> n;
  while (r <= n)
  {
    i++;
    r += (1 + i) * i / 2;
  }
  cout << i - 1 << endl;
  return 0;
}
