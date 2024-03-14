/*#include<bits/stdc++.h>
using namespace std;
vector<int> printLeadersBruteForce(int arr[],int n)
{
    vector<int> vr;
    for (int i = 0; i < n;i++)
    {
        bool leader = true;

        for (int j = i + 1; j < n;j++)
        {
            if(arr[i]<arr[j])
            {
                leader = false;
                break;
            }
        }


        if(leader==true)
        {
            vr.push_back(arr[i]);
        }
    }

    return vr;


}
int main()
{

    // Array Initialization.
    int n = 6;
    int arr[n] = {10, 2332, 124, 3, 0, 6};

    vector<int> ans = printLeadersBruteForce(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}
*/  

#include<bits/stdc++.h>
using namespace std;
vector<int> printLeadersBruteForce(int arr[],int n)
{
    vector<int> vr;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0;i--)
    {
        if(arr[i]>maxi)
        {
            vr.push_back(arr[i]);
        }

        maxi = max(maxi, arr[i]);
    }

    sort(vr.begin(), vr.end());
    return vr;
}


int main()
{
    // Array Initialization.
    int n = 6;
    int arr[n] = {10, 2332, 124, 3, 0, 6};

    vector<int> ans = printLeadersBruteForce(arr, n);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
    return 0;
}