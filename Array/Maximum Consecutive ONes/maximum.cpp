#include<bits/stdc++.h>
using namespace std;
void maximum(vector<int> &nums)
{
    int count = 0;
    int maximum = 0;

    int n = nums.size();
    for (int i = 0; i < n;i++)
    {
        if(nums[i]==1)
        {
            count++;
            maximum = max(maximum, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << "\n maximum number of ones is " << maximum;
}
int main()
{
    vector<int> v;

    int size;
    cout << "\n enter the size of your vector" << endl;
    cin >> size;

    cout << "\n enter the elements in your vector" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    };
}