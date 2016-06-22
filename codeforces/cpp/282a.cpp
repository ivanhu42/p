#include <iostream>
#include <string>

using namespace std;

int main()
{
  string op;
  int n, i, r = 0;;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> op;
    if (op == "X++" || op == "++X")
      r++;
    else if (op == "X--" || op == "--X")
      r--;
  }
  cout << r << endl;
  return 0;
}
