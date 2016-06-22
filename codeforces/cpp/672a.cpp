#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, i, j, k;
  vector<int> list;
  list.push_back(0);
  for (i = 1; i < 10; i++)
    list.push_back(i);
  for (i = 1; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      list.push_back(i);
      list.push_back(j);
    }
  }
  for (i = 1; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      for (k = 0; k < 10; k++)
      {
        list.push_back(i);
        list.push_back(j);
        list.push_back(k);
      }
    }
  }
  while(cin >> n)
    cout << list[n] << endl;
  return 0;
}
