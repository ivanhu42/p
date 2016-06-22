#include <iostream>

using namespace std;

int main()
{
  int n, i, out, in, c = 0, r = 0;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> out >> in;
    c = c + in - out;
    if (c > r)
      r = c;
  }
  cout << r << endl;
  return 0;
}
