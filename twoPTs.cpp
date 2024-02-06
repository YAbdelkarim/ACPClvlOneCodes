#include <bits/stdc++.h>
using namespace std;

pair<int, int> pairSum(vector<int> arr, int sum)
{
    int i = 0;
    int j = arr.size() - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == sum)
        {
            return make_pair(i, j);
        }
        if (arr[i] + arr[j] > sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}

int main()
{
    vector<int> arr = {1, 3, 4, 7, 11, 14, 16};
    pair<int, int> p = pairSum(arr, 22);

    cout << p.first << " " << p.second << endl;

    return 0;
}