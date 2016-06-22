#include <iostream>
#include <vector>

using namespace std;

struct c
{
  int n1;
  int n2;
  int n3;
};

int main()
{
  int n, i, a;
  c t;
  t.n1 = 0;
  t.n2 = 0;
  t.n3 = 0;
  cin >> n;
  vector<int> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a / 25;
  }
  for (i = 0; i < n; i++)
  {
    if (v[i] == 1)
      t.n1++;
    else if (v[i] == 2)
    {
      if (t.n1 == 0)
      {
        cout << "NO" << endl;
        return 0;
      }
      else
      {
        t.n1--;
        t.n2++;
      }
    }
    else
    {
      if (t.n2 == 0)
      {
        if (t.n1 >= 3)
        {
          t.n1 -= 3;
          t.n3++;
        }
        else
        {
          cout << "NO" << endl;
          return 0;
        }
      }
      else
      {
        if (t.n1 == 0)
        {
          cout << "NO" << endl;
          return 0;
        }
        else
        {
          t.n1--;
          t.n2--;
          t.n3++;
        }
      }
    }
  }
  cout << "YES" << endl;
  return 0;
}
