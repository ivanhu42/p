#include <iostream>

using namespace std;

int main()
{
  int n, r;
  cin >> n;
  r = n;
  for (int i = 1; n - i >= 1; i++)
    r += (n - i) * i;
  cout << r << endl;
  return 0;
}
