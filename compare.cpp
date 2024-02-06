#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    return a.first > b.first;
}

int main()
{
    vector<pair<int, int>> v = {
        {5, 4},
        {9, 2},
        {1, 3},
        {10, 0},
        {1, 2},
        {5, 9},

    };
    sort(v.begin(), v.end());
    for (auto t : v)
        cout << t.first << " " << t.second << endl;

    return 0;
}