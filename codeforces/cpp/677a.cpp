#include <iostream>

using namespace std;

int main()
{
  int n, h, r = 0, a;
  cin >> n >> h;
  r = n;
  while(cin >> a)
    if (a > h)
      r++;
  cout << r << endl;
  return 0;
}
