#include <iostream>
#include <string>

using namespace std;

int main()
{
  char d;
  string str;
  string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
  cin >> d;
  cin >> str;
  if (d == 'R')
    for (auto &c : str)
      c = kb[kb.find(c) - 1];
  else
    for (auto &c : str)
      c = kb[kb.find(c) + 1];
  cout << str << endl;
  return 0;
}
