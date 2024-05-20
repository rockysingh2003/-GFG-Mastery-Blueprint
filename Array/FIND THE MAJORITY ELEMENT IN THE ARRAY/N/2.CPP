

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{

    int n = v.size();

    map<int, int> myMap;

    for (int i = 0; i < n;i++)
    {
        myMap[v[i]]++;
    }

    for(auto i:myMap)
    {
        if(i.second> (n/2))
        {
            return i.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
