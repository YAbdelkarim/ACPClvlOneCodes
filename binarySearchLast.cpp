#include <bits/stdc++.h>
using namespace std;

int binarySearchLast(int arr[], int left, int right, int x)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            while (arr[mid + 1] == x)
                mid++;
            return mid;
        }
        if (arr[mid] < x)
        {
            return binarySearchLast(arr, mid + 1, right, x);
        }
        else
        {
            return binarySearchLast(arr, left, mid - 1, x);
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ind = binarySearchLast(arr, 0, size - 1, 5);

    cout << ind << endl;

    return 0;
}