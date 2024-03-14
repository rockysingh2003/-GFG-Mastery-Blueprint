/*
#include <bits/stdc++.h>
using namespace std;
int Kadane(vector<int> v)
{
    int sum = 0;
    int maxi = v[0]; // this is we are initialising to first element becoz atleast one number should be present.

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}
int main()
{
    vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int number = Kadane(v);
    cout << "\n the sum of the maximum subarray is " << number;
    return 0;
}

*/


//see thee above code is purely returning maximum subarray sum but we want to know subarray.
#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long sum = 0;
    long long max = INT16_MIN;

    int start = 0; //<----this one is starting index;
    int ansStart = -1, ansEnd = -1;


    for (int i = 0; i < n;i++)
    {
        if(sum==0)
            start = i;

        sum += arr[i];

        if(sum>max)
        {
            max = sum;
            ansStart = start;
            ansEnd = i;
        }


        if(sum<0)
            sum = 0;
    }



    //printing the subarray
    for (int i = ansStart; i <= ansEnd;i++)
    {
        cout << arr[i] << " ";
    }

    return max;
    
}


int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}