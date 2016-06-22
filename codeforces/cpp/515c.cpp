#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool s_d (char a, char b)
{
  return (a > b);
}

int main()
{
  int n;
  string str;
  cin >> n;
  cin >> str;
  vector<char> v;
  int l = str.length(), i;
  for(i = 0; i < l; i++)
  {
    if(str[i] == '2' || str[i] == '3' || str[i] == '5' || str[i] == '7')
      v.push_back(str[i]);
    else if(str[i] == '4')
    {
      v.push_back('3');
      v.push_back('2');
      v.push_back('2');
    }
    else if(str[i] == '6')
    {
      v.push_back('3');
      v.push_back('5');
    }
    else if(str[i] == '8')
    {
      v.push_back('2');
      v.push_back('2');
      v.push_back('2');
      v.push_back('7');
    }
    else if(str[i] == '9')
    {
      v.push_back('2');
      v.push_back('3');
      v.push_back('3');
      v.push_back('7');
    }
  }
  sort(v.begin(), v.end(), s_d);
  for(i = 0; i < v.size(); i++)
    cout << v[i];
  cout << endl;
  return 0;
}
