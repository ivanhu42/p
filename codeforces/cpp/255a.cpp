#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int n, i, a, e1 = 0, e2 = 0, e3 = 0;
  cin >> n;
  for(i = 0; i < n; i++)
  {
    cin >> a;
    if(i % 3 == 0)
      e1 += a;
    else if(i % 3 == 1)
      e2 += a;
    else
      e3 += a;
  }
  if(e1 > e2 && e1 > e3)
    cout << "chest" << endl;
  else if(e2 > e1 && e2 > e3)
    cout << "biceps" << endl;
  else
    cout << "back" << endl;
  return 0;
}
