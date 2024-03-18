#include <bits/stdc++.h>
using namespace std;
int rotation(vector<int> &arr)
{
    // int n = arr.size();
    // int lower = 0;
    // int higher = n - 1;
    // int count = 0;

    // while(lower<=higher)
    // {
    //     int middle = lower + (higher - lower) / 2;

    //     if(arr[lower]<=arr[middle])
    //     {
    //         count++;
    //         higher = middle - 1;
    //     }
    // }

    // return count+1;
    // int left = 0;
    // int right = arr.size() - 1;

    // while (left < right)
    // {
    //     int mid = left + (right - left) / 2;

    //     if (arr[mid] > arr[right])
    //     {
    //         left = mid + 1;
    //     }
    //     else
    //     {
    //         right = mid;
    //     }
    // }

    // return left;

    int n = arr.size();
    int lower = 0;
    int higher = n - 1;
    int ans = INT_MAX;
    int index = -1;

    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        //what if the given arrray provided is not rotated but sorted.
        if(arr[lower]<=arr[higher])
        {
            if(arr[lower]<ans)
            {
                ans = arr[lower];  //this is providing us the lowest element.
                index = lower; //this is providing us the index of the lowest element.
            }

            break;
        }


        //what if the left most is rotated and sorted.
        if(arr[middle]>=arr[lower])
        {
            if(arr[lower]<ans)
            {
                ans = arr[lower];
                index = lower;
            }

            lower = middle + 1; //this is where we are eliminating the left part after the searching the lowest element.
        }

        else
        {
            if(arr[middle]<ans)
            {
                ans = arr[middle];
                index = middle;
            }

            higher = middle - 1;
        }
    }
    return index;
}
int main()
{
    vector<int> ar = {4, 5, 6, 7, 0, 1, 2, 3};
    int count = rotation(ar);
    cout << "\n the number of rotation is " << count;
    return 0;
}