
#include <bits/stdc++.h>
using namespace std;

int number(vector<int> &arr, int size,int target)
{
    int lower = 0;
    int higher = size - 1;

    /*
    since the array is ar[]={4,5,6,7,0,1,2,3};
    as we can see that the at the some index there is element in the sorted manner .
    First step we can eiter find that index then perform the binary search in two parts-left sorted part and right sorted part.
    But this leads to time complexity of O(n)+2*O(log base n);
    Therefore to reduce this we are checking for the condition by applying in the binary search.
    */
    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        if(arr[middle]==target)
        {
            return middle;
        }

        //checking either the left part sorted 
        else if(arr[lower]<=arr[middle])
        {
            //checking in the this left part whether target lies or not ...
            if(arr[lower]<=target and target<=arr[middle])
            {
                higher = middle - 1;
            }

            else
            {
                lower = middle + 1;
            }
        }

        // checking either the right part sorted
        else if (arr[middle] <= arr[higher])
        {
            // checking in the this left part whether target lies or not ...
            if (arr[middle] <= target and target <= arr[higher])
            {
                lower = middle + 1;
            }

            else
            {
                higher = middle - 1;
            }
        }
    }

    return -1;
}

int main()
{
    vector<int> arr = {0,1,2,3,4,5,6,7};
    int n = 8, x = 0;
    int ans = number(arr, n, x);
    cout << "The number  is present at the index : "
         << ans << "\n";
    return 0;
}
