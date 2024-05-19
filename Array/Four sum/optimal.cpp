

#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());

    vector<vector<long long int >> ans;

    for (int i = 0; i < n;i++)
    {
        if(i>0 and nums[i]==nums[i-1])
            continue;

        for (int j = i + 1; j < n;j++)
        {
            if(j>i+1 and nums[j]==nums[j-1])
                continue;

            int k = j + 1;
            int l = n - 1;

            while(k<l)
            {
                long long int sum = nums[i] + nums[j];
                sum += nums[k];
                sum += nums[l];

                if(sum==target) 
                {
                    vector<long long int> temp = {nums[i], nums[j], nums[k], nums[l]};
                    ans.push_back(temp);
                    k++;
                    l--;

                    // skip the duplicates:
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                    while (k < l && nums[l] == nums[l + 1])
                        l--;
                }
                else if (sum < target)
                    k++;
                else
                    l--;
                }
            }
        }

        return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<long long int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans)
    {
        cout << "[";
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
