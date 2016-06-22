#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
  int n, i, one = 0, zero = 0;
  string str;
  cin >> n;
  cin >> str;
  for (i = 0; i < n; i++)
  {
    if (str[i] == '0')
      zero++;
    else
      one++;
  }
  cout << abs(one - zero) << endl;
  return 0;
}
