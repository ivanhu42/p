#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string str;
  cin >> str;
  int l = str.length(), i, lower = 0, upper = 0;
  for (i = 0; i < l; i++)
  {
    if (islower(str[i]))
      lower++;
    else if (isupper(str[i]))
      upper++;
  }
  if (lower >= upper)
    for (i = 0; i < l; i++)
      str[i] = tolower(str[i]);
  else
    for (i = 0; i < l; i++)
      str[i] = toupper(str[i]);
  cout << str << endl;
  return 0;
}
