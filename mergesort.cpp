#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

void merge(int arr[], int left, int mid, int right)
{
    int subarr1 = mid - left + 1;
    int subarr2 = right - mid;

    int leftarr[subarr1];
    int rightarr[subarr2];

    for (size_t i = 0; i < subarr1; i++)
    {
        leftarr[i] = arr[left + i];
    }
    for (size_t i = 0; i < subarr2; i++)
    {
        rightarr[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0;
    int k = left;

    while (i < subarr1 && j < subarr2)
    {
        if (leftarr[i] < rightarr[j])
        {
            arr[k] = leftarr[i];
            i++;
        }
        else
        {
            arr[k] = rightarr[j];
            j++;
        }
        k++;
    }

    while (i < subarr1)
    {
        arr[k] = leftarr[i];
        i++;
        k++;
    }
    while (j < subarr2)
    {
        arr[k] = rightarr[j];
        j++;
        k++;
    }


}

void mergesort(int arr[], int left, int right)
{
    if (left != right)
    {
        int mid = (left + right) / 2;

        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{

    int arr[] = {7, 3, 4, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}