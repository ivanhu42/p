#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int c, r, i, j;
  for (i = 0; i < 5; i++)
    for (j = 0; j < 5; j++)
    {
      cin >> c;
      if(c == 1)
        r = abs(j - 2) + abs(i - 2);
    }
  cout << r << endl;
  return 0;
}
