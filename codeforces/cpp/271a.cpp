#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, i;
  cin >> n;
  for (i = n + 1; ; i++)
  {
    string str = to_string(i);
    if (str[0] == str[1] || str[0] == str[2] || str[0] == str[3] || str[1] == str[2] || str[1] == str[3] || str[2] == str[3])
      continue;
    else
    {
      cout << str << endl;
      return 0;
    }
  }
}
