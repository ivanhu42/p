#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string str;
  int i, w = 0, b = 0;
  while (cin >> str)
    for (i = 0; i < 8; i++)
    {
      if (str[i] == 'Q')
        w += 9;
      else if (str[i] == 'R')
        w += 5;
      else if (str[i] == 'B' || str[i] == 'N')
        w += 3;
      else  if (str[i] == 'P')
        w += 1;
      else if (str[i] == 'q')
        b += 9;
      else if (str[i] == 'r')
        b += 5;
      else if (str[i] == 'b' || str[i] == 'n')
        b += 3;
      else if (str[i] == 'p')
        b += 1;
      else
        continue;
    }
  if (w == b)
    cout << "Draw" << endl;
  else if (w > b)
    cout << "White" << endl;
  else
    cout << "Black" << endl;
  return 0;
}
