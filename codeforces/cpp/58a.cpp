#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
  string str;
  cin >> str;
  if (regex_match(str, regex("(.*)[h](.*)[e](.*)[l](.*)[l](.*)[o](.*)")))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
