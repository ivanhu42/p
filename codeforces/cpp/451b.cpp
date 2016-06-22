#include <iostream>
#include <vector>

using namespace std;

int main()
{
  long long n, i, a, t;
  cin >> n;
  vector<long long> v(n+2);
  v[0] = 0;
  v[n+1] = 1000000001;
  vector<long long> s;
  for (i = 1; i < n+1; i++)
  {
    cin >> a;
    v[i] = a;
  }
  for (i = 1; i < n+1; i++)
  {
    if (v[i] > v[i+1])
      s.push_back(i);
  }
  t = s.size();
  if (t == 0)
  {
    cout << "yes" << endl << "1 1" << endl;
  }
  else
  {
    if (t == s[t-1] - s[0] + 1 && v[s[0]] < v[s[t-1]+2] && v[s[0]-1] < v[s[t-1]+1])
    {
      cout << "yes" << endl;
      cout << s[0] << " " << s[t-1] + 1 << endl;
    }
    else
      cout << "no" << endl;
  }
  return 0;
}
