#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int i, t, a, l[180];
  cin >> t;
  for(i = 0; i < t; i++)
  {
    cin >> a;
    l[i] = a;
  }
  for(i = 0; i < t; i++)
  {
    if(l[i] >= 60 && 360 % (180 - l[i]) == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
