#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sort_by_first (pair<int, int> p1, pair<int, int> p2)
{
    return (p1.first < p2.first);
}

int main ()
{
    int n, i, a;
    pair<int, int> p;
    vector<pair<int, int> > v;
    cin >> n;
    for (i = 0; i != n; i++)
    {
        cin >> a;
        p.first = a;
        p.second = i + 1;
        v.push_back(p);
    }
    sort(v.begin(), v.end(), sort_by_first);
    for (i = 0; i != n / 2; i++)
    {
        cout << v[i].second << " " << v[n - i - 1].second << endl;
    }
    return 0;
}
