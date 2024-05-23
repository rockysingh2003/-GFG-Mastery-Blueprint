#include <bits/stdc++.h>
using namespace std;


void RearrangebySign(vector<int> ar, int n)
{

    int currentCount = 0;//currently we haven't consider any element that is why it is zero...
    int longest = 1; //since there exists one element therefore longest is 1..
    int lastSmaller = INT_MIN;

    for (int i = 0; i < n;i++)
    {
        if(ar[i-1]==lastSmaller)
        {
            currentCount += 1;
            lastSmaller = ar[i];
        }

        else if(ar[i-1]!=lastSmaller)
        {
            currentCount = 1;
            lastSmaller = ar[i];
        }

        longest = max(currentCount, longest);
    }

    cout << "\n the longst is " << longest;
}

int main()
{

    // Array Initialisation.
    int n = 4;
    vector<int> A{102, 4, 100, 1, 101, 3, 2, 1, 1};

    RearrangebySign(A, n);

    return 0;
}