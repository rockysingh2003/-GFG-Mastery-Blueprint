/*
#include<bits/stdc++.h>
using namespace std;
void two_sum(int n, int arr[],int target)
{
    for (int i = 0; i < n;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout << "the index at which they are present are " << i << " " << j << endl;
                cout << "\n we have found the two  sum" << endl;
                break;
            }
        }
    }

    cout << "\n the index at which they are present are " << -1 << " " << -1;
    cout << "\n we have not found the two sum" << endl;
}
int main()
{
    int n=5;
    int arr[] = {2, 6, 5, 8, 11};
    int target = 14;
    two_sum(n, arr, target);
    return 0;
}

above solution is the naive solution .

*/