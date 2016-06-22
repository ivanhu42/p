#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, r = 1, i;
  string str, last_str;
  cin >> n;
  cin >> last_str;
  for (i = 0; i < n - 1; i++)
  {
    cin >> str;
    if (str == last_str)
      continue;
    else
    {
      r++;
      last_str = str;
    }
  }
  cout << r << endl;
  return 0;
}
