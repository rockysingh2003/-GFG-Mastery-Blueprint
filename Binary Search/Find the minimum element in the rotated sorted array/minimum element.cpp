#include<bits/stdc++.h>
using namespace std;
int rotation(vector<int> &arr,int size)
{
    int lower = 0;
    int higher = size - 1;
    int ans = INT_MAX;
    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        /*
        we will appluing the same logic that we have applied over the search the element in the rotated sorted array with little twist.
        */
       if(arr[lower]<=arr[higher])
       {
           ans = min(ans, arr[lower]);
           break;
       }


       if(arr[lower]<=arr[middle])
       {
           ans = min(ans, arr[lower]);
           lower = middle + 1;
       }

       else if(arr[middle]<=arr[higher])
       {
           ans = min(ans, arr[higher]);
           higher = middle - 1;
       }
    }

    return ans;
}
int main()
{
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    vector<int> v;
    cout << "\n enter the element in your array" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int minimum = rotation(v, size);
    cout << "\n the minimum element is " << minimum << endl;

    return 0;
}