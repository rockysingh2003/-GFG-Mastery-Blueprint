#include<bits/stdc++.h>
using namespace std;
void kadane(vector<int> &v)
{
    int sum = 0;
    int maxi = v[0];

    int n = v.size();

    //since we have to print the longest subarray that's why we have to store the starting index...
    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;
    for (int i = 0; i < n;i++)
    {
        if(sum==0)
            start = i;
        sum += v[i];
        
        if(sum>maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum<0)
        {
            sum = 0;
        }
    }


    //printing the longest subarray is :
    for (int i = ansStart; i<=ansEnd ;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    kadane(v);
}