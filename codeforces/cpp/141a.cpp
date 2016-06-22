#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int i;
  string name1, name2, str;
  vector<int> v(26, 0);
  cin >> name1 >> name2 >> str;
  name1 += name2;
  for (auto c : str)
    v[((int) c) - 65]++;
  for (auto c : name1)
  {
    if (v[((int) c) - 65] > 0)
      v[((int) c) - 65]--;
    else
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  for (i = 0; i < 26; i++)
    if (v[i] != 0)
    {
      cout << "NO" << endl;
      return 0;
    }
  cout << "YES" << endl;
  return 0;
}
