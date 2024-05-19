

#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int >> fourSum(vector<int> &nums, int target)
{
    //calculating the size of an array...
    int n = nums.size();

   

    set<vector<long long int >> st; //this is a set in which unique vector will be stored.

    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            set<long long int > hashset;

            for (int k = j + 1; k < n;k++)
            {
                long long int sum = nums[i] + nums[j];
                sum += nums[k];

                //calculating the fourthe element value ...
                long long int fourth_element = target - sum; //this should be our fourth element ..right!!!!!!!!!!!!!!!!!!

                if(hashset.find(fourth_element)!=hashset.end())
                {
                    vector<long long int  > temp = {nums[i], nums[j], nums[k], fourth_element};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                } 
            }
        }
    }

    vector<vector<long long int>> result(st.begin(), st.end()); // this is will store our final answer.result(st.begin(), st.end());
    return result;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<long long int >> ans = fourSum(nums, target);
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
