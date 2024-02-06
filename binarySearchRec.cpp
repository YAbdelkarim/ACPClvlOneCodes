#include <bits/stdc++.h>
using namespace std;

int binarySearchRec(int arr[], int left, int right, int x)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            return binarySearchRec(arr, mid + 1, right, x);
        }
        else
        {
            return binarySearchRec(arr, left, mid - 1, x);
        }
    }
    return -1;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ind = binarySearchRec(arr, 0, size - 1, 1);

    cout << ind << endl;

    return 0;
}