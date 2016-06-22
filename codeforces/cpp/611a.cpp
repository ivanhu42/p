#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x;
  string str;
  cin >> x;
  cin >> str;
  cin >> str;
  if (str == "week")
  {
    if (x == 5 || x == 6)
      cout << 53 << endl;
    else
      cout << 52 << endl;
  }
  else
  {
    if (x <= 29)
      cout << 12 << endl;
    else if (x == 30)
      cout << 11 << endl;
    else
      cout << 7 << endl;
  }
  return 0;
}
