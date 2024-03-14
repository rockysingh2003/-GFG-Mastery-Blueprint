#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> v)
{
    int element;
    int count = 0;

    // we are now calculating the majority element.
    for (int i = 0; i < v.size(); i++)
    {
        if (count == 0) // this indicate that the element to be initialise.
        {
            count = 1;
            element = v[i]; // we are initialising the element .
        }

        else if (v[i] == element)
        {
            count++;
        }

        else
            count--;
    }

    // above piece of loop will provide the answer with the statement:"From side this the majority elementt";
    // now below code is actually checking whether the assumptions is correct or not.
    int count_one = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == element)
            count_one++;
    }

    int majo = v.size() / 2;
    if (count_one > majo)
    {
        return element;
    }

    return -1;
}
int main()
{
    vector<int> arr{7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};

    int ret = majorityElement(arr);
    cout << ret << " Hello";
    return 0;
}