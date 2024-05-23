#include <bits/stdc++.h>
using namespace std;

bool linear_search(vector<int> ar,int x)
{
    int n = ar.size();

    for (int i = 0; i < n;i++)
    {
        if(ar[i]==x)
        {
            return true;
        }
    }

    return false;
}
void  RearrangebySign(vector<int> ar, int n)
{
    int longest = 1;
    for (int i = 0; i < n;i++)
    {
        int x = ar[i];
        int count = 1;

        while (linear_search(ar, x + 1) == true)
        {
            x += 1;
            count += 1;
        }

        longest = max(longest, count);
    }

    cout << "\n the longest consecutive sequence is " << longest;
}

int main()
{

    // Array Initialisation.
    int n = 4;
    vector<int> A{102,4,100,1,101,3,2,1,1};

    RearrangebySign(A, n);

   
    return 0;
}