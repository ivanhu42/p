#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
  int n, i;
  string str;
  vector<string> v;
  map<string, int> f;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> str;
    v.push_back(str);
  }
  for (i = 0; i < n; i++)
  {
    str = v[i];
    if (f[str])
    {
      cout << str << f[str] << endl;
      f[str]++;
    }
    else
    {
      f[str] = 1;
      cout << "OK" << endl;
    }
  }
  return 0;
}
