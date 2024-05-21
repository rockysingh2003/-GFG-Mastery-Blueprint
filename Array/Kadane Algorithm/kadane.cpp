#include <bits/stdc++.h>
using namespace std;

void kadane_algorithm(vector<int> &nums)
{
    int sum = 0;
    int maxi = nums[0];
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        maxi = max(maxi, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << "\nThe sum of the largest subarray is " << maxi << endl; // Corrected output
}

int main()
{
    vector<int> v;
    int size;
    cout << "\nEnter the size of your vector: " << endl;
    cin >> size;

    cout << "\nEnter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    kadane_algorithm(v);
    return 0; // Added return statement
}
