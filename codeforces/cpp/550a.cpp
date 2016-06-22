#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
  int i, j;
  string str;
  vector<int> ab;
  vector<int> ba;
  cin >> str;
  int l = str.length();
  for (i = 0; i < l - 1; i++)
  {
    if (str[i] == 'A' && str[i + 1] == 'B')
      ab.push_back(i);
    if (str[i] == 'B' && str[i + 1] == 'A')
      ba.push_back(i);
  }
  if (ab.empty() || ba.empty())
    cout << "NO" << endl;
  else
  {
    if (abs(ab[0] - ba[ba.size() - 1]) > 1 || abs(ba[0] - ab[ab.size() - 1]) > 1)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
