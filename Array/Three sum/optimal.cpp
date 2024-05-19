#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> triplet(vector<int> &nums)
{
    vector<vector<int>> ans; // this is the vector where we will store the answer ..

    sort(nums.begin(), nums.end()); // sorting the array..

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        // checking for the duplicates ,if present then skip...

        if (i != 0 and nums[i] == nums[i - 1])
            continue;

        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];

            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }

            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while (j < k and nums[j] == nums[j - 1])
                    j++;
                while (j < k and nums[k] == nums[k + 1])
                    k--;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    vector<vector<int>> ans = triplet(arr);
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}