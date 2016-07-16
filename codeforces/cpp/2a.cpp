#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;
typedef long double db;
typedef long long ll;

int main ()
{
    int n, i, score, score_max = 0;
    string name;
    vector<string> winner;
    map<string, int> sc;
    pair<string, int> rec;
    vector<pair<string, int> > recs;
    cin >> n;
    for (i = 0; i != n; i++)
    {
        cin >> name >> score;
        if (sc.find(name) != sc.end())
        {
            sc[name] += score;
        }
        else
        {
            sc[name] = score;
        }
        rec.first = name;
        rec.second = sc[name];
        recs.push_back(rec);
    }
    for (auto &tem : sc)
    {
        score_max = max(score_max, tem.second);
    }
    for (auto &tem : sc)
    {
        if (tem.second == score_max)
            winner.push_back(tem.first);
    }
    if (winner.size() == 1)
    {
        cout << winner[0] << endl;
    }
    else
    {
        for (auto &tem_0 : recs)
        {
            if (tem_0.second >= score_max)
            {
                for (auto &temtem : winner)
                {
                    if (temtem == tem_0.first)
                    {
                        cout << temtem << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}

