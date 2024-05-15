#include<bits/stdc++.h>
using namespace std;
void removal(int ar[],int n)
{
    int res = 1;

    for (int i = 1; i < n;i++)
    {
        if(ar[res-1]!=ar[i])
        {
            ar[res] = ar[i];
            res++;
        }
    }

    cout << "\n the array is " << endl;
    for (int i = 0; i < res;i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the elements in an array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[i];
    }

    removal(ar, size);
}