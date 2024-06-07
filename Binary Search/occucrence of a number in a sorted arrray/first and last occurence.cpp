#include<bits/stdc++.h>
using namespace std;
vector<int> occurence(vector<int> &nums,int size,int target)
{
    int startingPosition = -1, endingPosition = -1;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            startingPosition = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            endingPosition = i;
            break;
        }
    }
    return {startingPosition, endingPosition};

    return {startingPosition, endingPosition};
}

int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of your array" << endl;
    cin >> size;

    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int target;
    cout << "\n enter the value of your target" << endl;
    cin >> target;

    vector<int> answer = occurence(v, size, target);

    for(auto i:answer)
    {
        cout << "\n the indexex are " << i << endl;
    }
}