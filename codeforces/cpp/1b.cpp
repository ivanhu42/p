#include <iostream>
#include <vector>
#include <string>

using namespace std;

string rc2cor(string str)
{
  int col_v = 0, i, t;
  string r, tem;
  string row_s = str.substr(1, str.find('C') - 1);
  string col_s = str.substr(str.find('C') + 1);
  for(i = 0; i < col_s.length(); i++)
  {
    t = (int) col_s[i] - 48;
    for(int j = 0; j < col_s.length() - i - 1; j++)
      t *= 10;
    col_v += t;
  }
  while(col_v > 0)
  {
    if(col_v % 26 == 0)
    {
      tem += 'Z';
      col_v -= 26;
    }
    else
    {
      tem += (char) (col_v % 26 + 64);
      col_v -= col_v % 26;
    }
    col_v = col_v / 26;
  }
  for(i = 0; i < tem.length(); i++)
  {
    r += tem[tem.length() - 1 - i];
  }
  r += row_s;
  return r;
}

string cor2rc(string str)
{
  string r;
  int i, pos, col_v, tem;
  for(i = 0; i < str.length(); i++)
    if(str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
    {
      pos = i;
      break;
    }
  string row_s = str.substr(pos);
  string col_s = str.substr(0, pos);
  col_v = 0;
  for(i = 0; i < col_s.length(); i++)
  {
    tem = 0;
    if(col_s[i] == 'A')
      tem = 1;
    else if(col_s[i] == 'B')
      tem = 2;
    else if(col_s[i] == 'C')
      tem = 3;
    else if(col_s[i] == 'D')
      tem = 4;
    else if(col_s[i] == 'E')
      tem = 5;
    else if(col_s[i] == 'F')
      tem = 6;
    else if(col_s[i] == 'G')
      tem = 7;
    else if(col_s[i] == 'H')
      tem = 8;
    else if(col_s[i] == 'I')
      tem = 9;
    else if(col_s[i] == 'J')
      tem = 10;
    else if(col_s[i] == 'K')
      tem = 11;
    else if(col_s[i] == 'L')
      tem = 12;
    else if(col_s[i] == 'M')
      tem = 13;
    else if(col_s[i] == 'N')
      tem = 14;
    else if(col_s[i] == 'O')
      tem = 15;
    else if(col_s[i] == 'P')
      tem = 16;
    else if(col_s[i] == 'Q')
      tem = 17;
    else if(col_s[i] == 'R')
      tem = 18;
    else if(col_s[i] == 'S')
      tem = 19;
    else if(col_s[i] == 'T')
      tem = 20;
    else if(col_s[i] == 'U')
      tem = 21;
    else if(col_s[i] == 'V')
      tem = 22;
    else if(col_s[i] == 'W')
      tem = 23;
    else if(col_s[i] == 'X')
      tem = 24;
    else if(col_s[i] == 'Y')
      tem = 25;
    else if(col_s[i] == 'Z')
      tem = 26;
    for(int j = 0; j < col_s.length() - 1 - i; j++)
      tem *= 26;
    col_v += tem;
  }
  r = "R" + row_s + "C" + to_string(col_v);
  return r;
}

int main()
{
  int n, i;
  string str;
  cin >> n;
  vector<string> v(n);
  for(i = 0; i < n; i++)
  {
    cin >> str;
    v[i] = str;
  }
  for(i = 0; i < n; i++)
  {
    if((v[i].find('R') == 0) and (v[i].find('C') > 1) and (v[i].find('C') < v[i].length()) and ((int) v[i][1] < 58))
      cout << rc2cor(v[i]) << endl;
    else
      cout << cor2rc(v[i]) << endl;
  }
  return 0;
}
