#include <iostream>

using namespace std;

int main()
{
  int input, result;
  cin >> input;
  if (input % 3 == 0)
    result = input / 3 * 2;
  else
    result = input / 3 * 2 + 1;
  cout << result;
  return 0;
}
