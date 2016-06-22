#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i;
  string str;
  cin >> str;
  int l = str.length();
  if (str[0] == '9')
  {
    cout << '9';
    for (i = 1; i < l; i++)
    {
      if ((int) str[i] < 53)
        cout << str[i];
      else
      {
        if (str[i] == '5')
          cout << '4';
        else if (str[i] == '6')
          cout << '3';
        else if (str[i] == '7')
          cout << '2';
        else if (str[i] == '8')
          cout << '1';
        else
          cout << '0';
      }
    }
  }
  else
  {
    for (i = 0; i < l; i++)
    {
      if ((int) str[i] < 53)
        cout << str[i];
      else
      {
        if (str[i] == '5')
          cout << '4';
        else if (str[i] == '6')
          cout << '3';
        else if (str[i] == '7')
          cout << '2';
        else if (str[i] == '8')
          cout << '1';
        else
          cout << '0';
      }
    }
  }
  cout << endl;
  return 0;
}
