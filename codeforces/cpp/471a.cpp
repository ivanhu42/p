#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int i, a;
  vector<int> v(6);
  for (i = 0; i < 6; i++)
  {
    cin >> a;
    v[i] = a;
  }
  sort(v.begin(), v.end());
  if ((v[0] == v[3] && v[4] == v[5]) || (v[1] == v[4] && v[0] == v[5]) || (v[2] == v[5] && v[0] == v[1]))
    cout << "Elephant" << endl;
  else if ((v[0] == v[3] && v[4] != v[5]) || (v[1] == v[4] && v[0] != v[5]) || (v[2] == v[5] && v[0] != v[1]))
    cout << "Bear" << endl;
  else
    cout << "Alien" << endl;
  return 0;
}
