#include <iostream>
#include <string>

using namespace std;

int main()
{
  string v1[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  string v2[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  int n;
  cin >> n;
  if (n < 20)
  {
    cout << v1[n] << endl;
  }
  else
  {
    if (n % 10 == 0)
      cout << v2[n / 10] << endl;
    else
      cout << v2[n / 10] << "-" << v1[n % 10] << endl;
  }
  return 0;
}
