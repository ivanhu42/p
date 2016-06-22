#include <iostream>
#include <string>

using namespace std;

int main()
{
  int r = 0;
  string n;
  cin >> n;
  for (auto c : n)
    if (c == '4' || c == '7')
      r++;
  if (r == 0)
    cout << "NO" << endl;
  else if (r == 4 || r == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
