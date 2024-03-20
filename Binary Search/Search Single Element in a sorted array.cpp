#include<bits/stdc++.h>
using namespace std;
int single(vector<int> &arr)
{
    int n = arr.size();

    //noting the edge cases .
    if(n==1)
        return arr[0];

    if(arr[0]!=arr[1])
        return arr[0];

     if(arr[n-1]!=arr[n-2])
         return arr[n - 1];

     int lower = 1;
     int higher = n - 2;
     while(lower<=higher)
     {
         int middle = lower + (higher - lower) / 2;

         if(arr[middle]!=arr[middle-1] and arr[middle]!=arr[middle+1])
         {
             return arr[middle];
         }


         else if((middle%2==1 and arr[middle]==arr[middle-1]) or(middle%2==0 and arr[middle]==arr[middle+1]))
         {
             lower = middle + 1;
         }

         else if (arr[middle] != arr[middle - 1] and arr[middle] == arr[middle + 1])
         {
             higher = middle - 1;
         }
     }
}
int main()
{
    vector<int> ar = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    int element = single(ar);
    cout << "\n the single element is" << element;
    return 0;
}