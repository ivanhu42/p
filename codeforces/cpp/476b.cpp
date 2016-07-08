#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

double fact (double n)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n-1);
}

double power (double a, double b)
{
  if (b == 1)
    return a;
  else
    return a * power(a, b-1);
}
double choose (double n, double m)
{
  return (fact(m) / (fact(n) * fact(m-n))) / power(2, m);
}
double judge(int n, double diff)
{
  diff = abs(diff);
  if (diff > n)
    return 0;
  else
  {
    int r = n - diff;
    if (r % 2 != 0)
      return 0;
    else
    {
      r = n - r / 2;
      return choose(r, n);
    }
  }
}

int main()
{
  string s1, s2;
  int r1 = 0, r2 = 0, qm = 0, i;
  double rez = 0;
  cin >> s1 >> s2;
  for (i = 0; i != s1.size(); i++)
  {
    if (s1[i] == '+')
      r1++;
    else
      r1--;
  }
  for (i = 0; i!= s2.size(); i++)
  {
    if (s2[i] == '+')
      r2++;
    else if (s2[i] == '-')
      r2--;
    else
      qm++;
  }
  if (qm == 0)
  {
    if (r1 == r2)
      rez = 1;
    else
      rez = 0;
  }
  else
    rez = judge(qm, (r2-r1));
  cout << setprecision(10) << rez << endl;
  return 0;
}
