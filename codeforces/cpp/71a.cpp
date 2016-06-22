#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  int n, i;
  string word;
  vector<string> words(100);
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> word;
    words[i] = word;
  }
  for (i = 0; i < n; i++)
  {
    if(words[i].length() > 10)
      cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << endl;
    else
      cout << words[i] << endl;
  }
  return 0;
}
