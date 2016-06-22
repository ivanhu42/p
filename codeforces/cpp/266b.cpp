#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, t, i, j;
  char p;
  cin >> n >> t;
  vector<char> queue(n);
  for (i = 0; i < n; i++)
  {
    cin >> p;
    queue[i] = p;
  }
  for (i = 0; i < t; i++)
    for (j = n - 1; j > 0; j--)
      if ((queue[j] == 'G') && (queue[j - 1] == 'B'))
      {
        swap(queue[j], queue[j - 1]);
        j--;
      }
  for (i = 0; i < n; i++)
    cout << queue[i];
  return 0;
}
