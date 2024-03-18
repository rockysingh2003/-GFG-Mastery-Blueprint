// #include<bits/stdc++.h>
// using namespace std;
// int small(int ar[],int n)
// {
//     // int lower = 0;
//     // int higher = n - 1;
//     // while(lower<=higher)
//     // {
//     //     int middle = lower + (higher - lower) / 2;

//     //     if(ar[middle]>=ar[0])
//     //         lower = middle;
//     //     else
//     //         higher = middle - 1;
//     // }

//     // return lower;

//     for (int i = 0; i < n;i++)
//     {
//         if (ar[i + 1] < ar[i])
//             return i+1;
        
//     }
// }
// int main()
// {
//     int  ar[] = {7,8,1,2,3,4,5,6};
//     int size = sizeof(ar) / sizeof(ar[0]);

//     int smallest = small(ar, size);
//     cout << "\n the smallest element is " << ar[smallest];
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int findPivot(const vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int pivotIndex = findPivot(nums);
    cout << "Pivot index: " << nums[pivotIndex] << endl;

    return 0;
}