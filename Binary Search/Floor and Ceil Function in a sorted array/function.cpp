// we have to implement the lower bound in order to maintain the order while inserting in the array.
#include <bits/stdc++.h>
using namespace std;
int  lower_bound(int arr[], int n, int target)
{
    int lower = 0;
    int higher = n - 1;
    int ans = n;
    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (arr[middle] >= target)
        {
            ans =arr[ middle];
            higher = higher - 1;
        }

        else
        {
            lower = lower + 1;
        }
    }

    return  ans;
}

int floor_function(int arr[],int size,int target)
{
    int lower = 0;
    int higher = size - 1;
    int ans = INT_MAX;

    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        if(arr[middle]==target)
        {
            ans = arr[middle];
        }

        else if(arr[middle]>target )
        {
            higher = middle - 1;
        }

        else if(arr[middle]<target)
        {
            ans = arr[middle];
            lower = middle + 1;
        }
    }

    return ans;
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

    int lower= lower_bound(arr, size, target);
    cout << "\n the ceil function is the implementation of the lower bound as arr[index]>=target is only satisfied by the lower bound condition ,thus answer is  " << lower<<endl;

    int floor = floor_function(arr, size, target);
    cout << "\n the floor value of the target is " << floor << endl;
}