#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string str;
  cin >> str;
  long long n = str.size(), i, l, r, m;
  vector<long long> v(n-1,0);
  vector<long long> s(n);
  for(i=0;i<n-1;i++)
    if(str[i]==str[i+1])
      v[i]=1;
  s[0]=0;
  for(i=1;i<n;i++)
    s[i]=s[i-1]+v[i-1];
  cin >> m;
  vector<long long> rez(m);
  for(i=0;i<m;i++)
  {
    cin >> l >> r;
    rez[i]=s[r-1]-s[l-1];
  }
  for(i=0;i<m;i++)
    cout << rez[i] << endl;
  return 0;
}
