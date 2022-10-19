#include <bits/stdc++.h>
using namespace std;
bool binary_search(int arr[], int target, int Size)
{

    int i = 0;
    int j = Size - 1;

    while (i <= j)
    {
        int mid = (i + j) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            i = mid + 1;
        else
            j = mid - 1;
    }

    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int target;
    cin >> target;

    int Size = sizeof(arr) / sizeof(arr[0]);
    cout << Size << endl;
    if (binary_search(arr, target, Size))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
}