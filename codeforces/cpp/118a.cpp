#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string word;
  cin >> word;
  for (char c : word)
  {
    if(c == 'A' || c == 'a' || c == 'O' || c == 'o' || c == 'Y' || c == 'y' || c == 'E' || c == 'e' || c == 'U' || c == 'u' || c == 'I' || c == 'i')
      continue;
    else
      cout << "." << (char) tolower(c);
  }
  cout << endl;
  return 0;
}
