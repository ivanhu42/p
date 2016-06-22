#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cin >> str;
  str += '2';
  int i, r = 1;
  for (i = 1; i < str.length(); i++)
  {
    if(r == 7)
    {
      cout << "YES" << endl;
      return 0;
    }
    else
    {
      if(str[i] == str[i - 1])
        r++;
      else
        r = 1;
    }
  }
  cout << "NO" << endl;
  return 0;
}
