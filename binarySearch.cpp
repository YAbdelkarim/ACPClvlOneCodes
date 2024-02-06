#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int binarySearch(int arr[], int size, int x)
{
    int left = 0, right = size - 1;

    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (x > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ind = binarySearch(arr, size, 1);

    cout << ind << endl;

    return 0;
}