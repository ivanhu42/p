#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  int i;
  string str;
  cin >> str;
  char list[str.length() / 2 + 1];
  for (i = 0; i < str.length(); i += 2)
    list[i / 2] = str[i];
  sort(list, list + str.length() / 2 + 1);
  for (i = 0; i < str.length() / 2; i++)
    cout << (int) list[i] - 48 << "+";
  cout << list[str.length() / 2] << endl;
  return 0;
}
