#include <iostream>
#include <string>

using namespace std;

int main()
{
  string n, r;
  cin >> n;
  if (n[0] != '-')
    cout << n << endl;
  else
  {
    n.erase(0, 1);
    if (n[1] == '0' && n.length() == 2)
      cout << 0 << endl;
    else
    {
      int l = n.length();
      if (n[l - 2] > n[l - 1])
        cout << '-' << n.erase(l - 2, 1) << endl;
      else
        cout << '-' << n.erase(l - 1, 1) << endl;
    }
  }
  return 0;
}
