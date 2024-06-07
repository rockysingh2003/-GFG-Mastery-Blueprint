#include<bits/stdc++.h>
using namespace std;
vector<int> occurence(vector<int> &arr,int size,int target)
{
    int start = -1, end = -1;
    for (int i = 0; i < size;i++)
    {
        if(arr[i]==target)
        {
            if(start==-1)
            {
                start = i;
            }
            else
            {
                end = i;
            }
        }
    }

    return {start, end};
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