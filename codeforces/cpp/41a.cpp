#include <iostream>
#include <string>

using namespace std;

int main()
{
  string w1, w2;
  cin >> w1 >> w2;
  int i, l = w1.length();
  if (l != w2.length())
  {
    cout << "NO" << endl;
    return 0;
  }
  else
  {
    for (i = 0; i < l; i++)
    {
      if (w1[i] == w2[l - i - 1])
        continue;
      else
      {
        cout << "NO" << endl;
        return 0;
      }
    }
    cout << "YES" << endl;
    return 0;
  }
}
