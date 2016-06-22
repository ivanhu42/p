#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
  string word, r;
  bool change = true;
  cin >> word;
  int l = word.length(), i;
  for (i = 1; i < l; i++)
  {
    if (isupper(word[i]))
      continue;
    else
    {
      change = false;
      break;
    }
  }
  if (change)
  {
    for (i = 0; i < l; i++)
    {
      if (islower(word[i]))
        word[i] = toupper(word[i]);
      else
        word[i] = tolower(word[i]);
    }
  }
  cout << word << endl;
  return 0;
}
