#include <iostream>

using namespace std;

int main()
{
  int a, b, s, d;
  cin >> a >> b >> s;
  d = abs(a) + abs(b);
  if(s < d)
    cout << "NO" << endl;
  else
  {
    if((s - d) % 2 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
