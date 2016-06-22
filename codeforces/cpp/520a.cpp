#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
  string str;
  int n, i;
  vector<bool> v(26, false);
  cin >> n >> str;
  if(n < 26)
  {
    cout << "NO" << endl;
    return 0;
  }
  else
    for(char c : str)
      v[((int) tolower(c)) - 97] = true;
  for (i = 0; i < 26; i++)
    if (v[i] == false)
    {
      cout << "NO" << endl;
      return 0;
    }
  cout << "YES" << endl;
  return 0;
}
