#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cin >> str;
  int l = str.length();
  cout << (l + 1) * 26 - l << endl;
  return 0;
}
