#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int i, r = 0;
  string str;
  vector<int> list(26, 0);
  cin >> str;
  for (char c : str)
    list[((int) c) - 97]++;
  for (i = 0; i < 26; i++)
    if(list[i] != 0)
      r++;
  if (r % 2 == 0)
    cout << "CHAT WITH HER!" << endl;
  else
    cout << "IGNORE HIM!" << endl;
}
