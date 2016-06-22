#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, num;
  cin >> n;
  vector<int> list(n);
  for (i = 0; i < n; i++)
  {
    cin >> num;
    list[num - 1] = i + 1;
  }
  for (i = 0; i < n; i++)
    cout << list[i] << endl;
  return 0;
}
