#include<bits/stdc++.h>
using namespace std;
void  largest(int ar[],int size )
{
    int sum = 0;
    int index = -1;

    for (int i = 0; i < size;i++)
    {
        if(ar[i]>sum)
        {
            sum = ar[i];
            index = i;
        }
    }

    // return
    cout << "\n the largest element present is " << ar[index] << " at the index " << index << " " << endl;
}

int main()
{
    int size;
    cout << "\n enter the size of an element" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[i];
    }

    largest(ar, size);
}