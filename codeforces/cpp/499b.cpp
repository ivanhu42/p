#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct dict
{
  string w1;
  string w2;
};

int main()
{
  int n, m, i, j;
  string str1, str2;
  cin >> n >> m;
  vector<dict> d(m);
  vector<string> s(n);
  dict a;
  for(i = 0; i < m; i++)
  {
    cin >> str1 >> str2;
    a.w1 = str1;
    if(str1.length() <= str2.length())
      a.w2 = str1;
    else
      a.w2 = str2;
    d[i] = a;
  }
  for(i = 0; i < n; i++)
  {
    cin >> str1;
    s[i] = str1;
  }
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      if(s[i] == d[j].w1)
      {
        cout << d[j].w2 << " ";
        break;
      }
    }
  }
  return 0;
}
