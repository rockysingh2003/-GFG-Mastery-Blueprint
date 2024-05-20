#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v)
{
    int n = v.size();

    vector<int> ans; // this will store our elements as answer.

    int cnt1 = 0, cnt2 = 0;
    int element1;
    int element2;

    for (int i = 0; i < n; i++)
    {
        if (cnt1 == 0 and v[i] != element2)
        {
            cnt1 = 1;
            element1 = v[i];
        }

        if (cnt2 == 0 and v[i] != element1)
        {
            cnt2 = 1;
            element2 = v[i];
        }

        else if (v[i] == element1)
            cnt1++;
        else if (v[i] == element2)
            cnt2++;

        else
        {
            cnt1--;
            cnt2--;
        }
    }

    // after applying the above algorithm we have come across with the two majority possible...
    //...elements. Now we have to check whether they are actually majority or not.
    //...for that we will count them again and if they are majority then we will add them in our answer.
    //...vector.
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (count1 == element1)
            count1++;
        if (count2 == element2)
            count2++;
    }

    int minimum = (n / 3) + 1;
    if (cnt1 >= minimum)
        ans.push_back(element1);
    if (cnt2 >= minimum)
        ans.push_back(element2);

    return ans;
}

int main()
{
    vector<int> arr = {11, 33, 33, 11, 33, 11};
    vector<int> ans = majorityElement(arr);
    cout << "The majority elements are: ";
    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
    return 0;
}
