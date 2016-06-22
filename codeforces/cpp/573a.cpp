#include <iostream>
#include <vector>

using namespace std;

long long gcd(long long a, long long b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}

bool check(long long a, long long b)
{
  long long t = gcd(a, b);
  a = a / t;
  b = b / t;
  while (a % 2 == 0)
    a = a / 2;
  while (a % 3 == 0)
    a = a / 3;
  while (b % 2 == 0)
    b = b / 2;
  while (b % 3 == 0)
    b = b / 3;
  if (a == 1 && b == 1)
    return true;
  else
    return false;
}

int main()
{
  long long n, i, a;
  bool r;
  cin >> n;
  vector<long long> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    v[i] = a;
  }
  for (i = 1; i < n; i++)
  {
    r = check(v[0], v[i]);
    if (!r)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
