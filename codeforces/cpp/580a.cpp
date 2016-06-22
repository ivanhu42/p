#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  long long n, a, r, i, j, result = 1;
  cin >> n;
  long long list[n];
  for (i = 0; i < n; i++)
  {
    cin >> a;
    list[i] = a;
  }
  for (i = 0; i < n - 1; i++)
  {
    r = 1;
    for (j = i + 1; j < n; j++)
    {
      if (list[j] >= list[j - 1])
        r++;
      else
        break;
    }
    i = j - 1;
    result = max(result, r);
  }
  cout << result << endl;
  return 0;
}
