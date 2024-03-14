#include<bits/stdc++.h>
using namespace std;
int low(vector<int> ar,int size,int x)
{
    int lower = 0;
    int higher = size - 1;
    long long int lowerbound = LLONG_MAX;
    while(lower<=higher)
    {
        long long int middle;

        middle = lower + (higher - lower) / 2;

        if (ar[middle] >= x)
        {
            lowerbound = min(middle, lowerbound);
            // lower = middle + 1;
            higher = middle - 1;
        }

        else
            // higher = middle - 1;
            lower = middle + 1;
    }

    return lowerbound == LLONG_MAX ? size : lowerbound;
}
int main()
{
    vector<int> ar = {1,2,2,3};
    int sizeOfarray = ar.size();
    int x = 2;
    int result = low(ar, sizeOfarray, x);
    cout << "\n the answer is " << result;
    return 0;
}