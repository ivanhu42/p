#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point
{
  int index;
  int rating;
  int position;
};

bool sort_rating (point p1, point p2)
{
  return (p1.rating < p2.rating);
}

bool sort_index (point p1, point p2)
{
  return (p1.index < p2.index);
}

int main()
{
  int n, i, a;
  point t;
  cin >> n;
  vector<point> v(n);
  for (i = 0; i < n; i++)
  {
    cin >> a;
    t.index = i;
    t.rating = a;
    v[i] = t;
  }
  sort(v.begin(), v.end(), sort_rating);
  for (i = n - 1; i >= 0; i--)
    v[i].position = n - i;
  for (i = n - 2; i >= 0; i--)
    if (v[i].rating == v[i + 1].rating)
      v[i].position = v[i + 1].position;
  sort(v.begin(), v.end(), sort_index);
  for (i = 0; i < n; i++)
    cout << v[i].position << " ";
  cout << endl;
  return 0;
}
