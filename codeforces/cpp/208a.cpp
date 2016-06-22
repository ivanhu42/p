#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cin >> str;
  int a;
  a = str.find("WUB");
  while (a != -1)
  {
    str.replace(a, 3, " ");
    a = str.find("WUB");
  }
  cout << str << endl;
  return 0;
}
