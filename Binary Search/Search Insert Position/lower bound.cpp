//we have to implement the lower bound in order to maintain the order while inserting in the array.
#include <bits/stdc++.h>
using namespace std;
void lower_bound(int arr[], int n, int target)
{
    int lower = 0;
    int higher = n - 1;
    int ans = n;
    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (arr[middle] >= target)
        {
            ans = middle;
            higher = higher - 1;
        }

        else
        {
            lower = lower + 1;
        }
    }

    cout << "\n the target to be inserted at the index" << ans;
}
int main()
{
    int size;
    cout << "\n enter the size of your array";
    cin >> size;

    int arr[size];
    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "\n enter the target value" << endl;
    cin >> target;

    lower_bound(arr, size, target);
}