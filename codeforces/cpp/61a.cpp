#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i, l;
  string a, b;
  cin >> a >> b;
  l = a.length();
  for(i = 0; i < l; i++)
  {
    if (a[i] == b[i])
      cout << 0;
    else
      cout << 1;
  }
  return 0;
}
