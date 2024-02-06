#include <bits/stdc++.h>
using namespace std;

int biggestSum(int arr[], int size, int k)
{
    int max_sum = INT_MIN;
    for (size_t i = 0; i < size - k + 1; i++)
    {
        int current_sum = 0;
        for (size_t j = 0; j < k; j++)
        {
            current_sum += arr[i + j];
        }
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main()
{

    int arr[] = {5,
                 4,
                 2,
                 3,
                 -1,
                 9,
                 3,
                 7,
                 6};
    int k = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << biggestSum(arr, size, k) << endl;

    return 0;
}