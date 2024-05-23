#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int> ar, int n)
{
    vector<int> v;

    int current_leader = ar[n - 1];
    v.push_back(current_leader);
    // we are traversing the element    from right to left direction...
    for (int i = n - 2; i >= 0;i--)
    {
        if(current_leader<ar[i])
        {
            current_leader = ar[i];
            v.push_back(current_leader);
        }
    }

    reverse(v.begin(), v.end());

    return v;
}

int main()
{

    // Array Initialisation.
    int n = 4;
    vector<int> A{4,7,1,0};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}