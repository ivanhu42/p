#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  long long s1, s2, s3, s4;
  int r = 0;
  cin >> s1 >> s2 >> s3 >> s4;
  long long l[] = {s1, s2, s3, s4};
  sort(l, l + 4);
  if (l[0] == l[1])
  {
    r++;
    if (l[1] == l[2])
    {
      r++;
      if (l[2] == l[3])
        r++;
    }
    else
      if (l[2] == l[3])
        r++;
  }
  else
  {
    if (l[1] == l[2])
    {
      r++;
      if (l[2] == l[3])
        r++;
    }
    else
      if (l[2] == l[3])
        r++;
  }
  cout << r << endl;
  return 0;
}
