#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int i, r = 0;
  vector<int> v(26, 0);
  char c;
  while(cin >> c)
    if (((int) c >= 97) && ((int) c <= 122))
      v[((int) c) - 97] = 1;
  for(i = 0; i < 26; i++)
    r += v[i];
  cout << r << endl;
  return 0;
}
