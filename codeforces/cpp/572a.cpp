#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  long long na, nb, k, m, i, a;
  cin >> na >> nb >> k >> m;
  vector<long long> A(na);
  vector<long long> B(nb);
  for (i = 0; i < na; i++)
  {
    cin >> a;
    A[i] = a;
  }
  for (i = 0; i < nb; i++)
  {
    cin >> a;
    B[i] = a;
  }
  sort(A.begin(), A.end());
  sort(B.begin(), B.end());
  if (A[k - 1] < B[nb - m])
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
