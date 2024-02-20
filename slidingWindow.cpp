#include <bits/stdc++.h>
using namespace std;

int biggestSum(int arr[], int size, int k)
{
    int max_sum = 0;

    for (size_t i = 0; i < k; i++)
    {
        max_sum += arr[i];
    }

    int window_sum = max_sum;
    for (size_t i = k; i < size; i++)
    {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(window_sum, max_sum);
    }

    return max_sum;
}

int main()
{
    int arr[] = {5, 4, 2, 3, -1, 9, 3, 7, 6};
    int k = 4;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << biggestSum(arr, size, k) << endl;

    return 0;
}
