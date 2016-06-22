#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  int n, s, i;
  vector<int> vp, vm, vpe;
  cin >> n;
  for (i = 1; i < n + 1; i++)
  {
    cin >> s;
    if (s == 1)
      vp.push_back(i);
    else if (s == 2)
      vm.push_back(i);
    else
      vpe.push_back(i);
  }
  int w = min(vp.size(), min(vm.size(), vpe.size()));
  cout << w << endl;
  for (i = 0; i < w; i++)
  {
    cout << vp.back() << " " << vm.back() << " " << vpe.back() << endl;
    vp.pop_back();
    vm.pop_back();
    vpe.pop_back();
  }
  return 0;
}
