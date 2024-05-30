
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{
    int index = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            index = min(index, i);
            // lower bound found:
            
        }
    }
    return index ;
}

int main()
{
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    int ind = lowerBound(arr, n, x);
    cout << "The lower bound is the index: " << ind << "\n";
    return 0;
}
