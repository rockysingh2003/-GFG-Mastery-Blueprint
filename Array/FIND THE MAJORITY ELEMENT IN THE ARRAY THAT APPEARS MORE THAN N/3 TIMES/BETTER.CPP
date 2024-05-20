#include <bits/stdc++.h>
using namespace std;

vector<int>  majorityElement(vector<int> v)
{

    int n = v.size();

    vector<int> ans; //this will be our vector in which we are gonna store the vector...

    map<int, int> myMap;

    // calculating the floor value;
    int minimum=(n/3)+1;

    for (int i = 0; i < n;i++)
    {
        myMap[v[i]]++;
        
        if(myMap[v[i]]==minimum)
        {
            ans.push_back(v[i]);
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    vector<int> ans = majorityElement(arr);
    cout << "The majority element is: " << endl;
    for(auto i:ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
