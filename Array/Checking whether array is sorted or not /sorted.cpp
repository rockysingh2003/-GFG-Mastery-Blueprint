#include<bits/stdc++.h>
using namespace std;
bool sorting(int arr[],int size)
{
    int flag = true;

    for (int i = 0; i <= size - 2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the element in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[size];
    }

    int flag = sorting(ar, size);
    
    if(flag==true)
    {
        cout << "\n element is sorted " << endl;
    }
    else
    {
        cout << "\n element is not sorted " << endl;
    }
}