#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string str;
  cin >> str;
  str[0] = toupper(str[0]);
  cout << str << endl;
  return 0;
}
