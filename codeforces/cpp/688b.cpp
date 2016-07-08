#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str, r;
  cin >> str;
  r = str;
  long long l = str.size();
  for (long long i = 0; i != l; i++)
  {
    r += str[l-1-i];
  }
  cout << r << endl;
  return 0;
}

