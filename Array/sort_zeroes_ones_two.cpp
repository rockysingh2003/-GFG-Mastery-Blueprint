#include<bits/stdc++.h>
using namespace std;
void sorting(int ar[],int n)
{
    int count_zeroes = 0;
    int count_ones = 0;
    int count_twoes = 0;

    for (int i = 0; i < n;i++)
    {
        if(ar[i]==0)
            count_zeroes++;
        else if(ar[i]==1)
            count_ones++;
        else
            count_twoes++;
    }

    int i=0;
    for ( ; i < count_zeroes;i++)
    {
        ar[i] = 0;
    }

    for (; i < count_ones; i++)
    {
        ar[i] = 1;
    }

    for (; i < count_twoes; i++)
    {
        ar[i] = 2;
    }

    cout << "\n after the sorting the result is " << endl;
    for (int i = 0; i < n;i++)
        cout << ar[i] << " ";
}
int main()
{
    int n = 5;
    int arr[] = {0, 0, 1, 1, 0, 2, 0};
    sorting(arr, n);
    return 0;
}