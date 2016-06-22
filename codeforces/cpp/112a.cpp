#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string w1, w2;
  cin >> w1 >> w2;
  for (auto &c : w1)
    c = tolower(c);
  for (auto &c : w2)
    c = tolower(c);
  if (w1 < w2)
    cout << -1 << endl;
  else if (w1 > w2)
    cout << 1 << endl;
  else
    cout << 0 << endl;
  return 0;
}
