#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, r = 0, i;
  char m = 'a';
  string str;
  cin >> n;
  cin >> str;
  for (i = 0; i < n; i++)
  {
    if (str[i] == m)
      r++;
    else
      m = str[i];
  }
  cout << r << endl;
  return 0;
}
