#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n, k, r = 0;
  cin >> n;
  k = ceil(log2((double) ceil( (double) n / 5) + 1) - 1);
  r = ceil((double) (n - (pow(2, k) - 1) * 5) / (double) pow(2, k));
  switch (r)
  {
    case 0:
      cout << "error" << endl;
      break;
    case 1:
      cout << "Sheldon" << endl;
      break;
    case 2:
      cout << "Leonard" << endl;
      break;
    case 3:
      cout << "Penny" << endl;
      break;
    case 4:
      cout << "Rajesh" << endl;
      break;
    case 5:
      cout << "Howard" << endl;
      break;
  }
  return 0;
}
