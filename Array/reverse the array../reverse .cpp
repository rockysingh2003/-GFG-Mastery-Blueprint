#include<bits/stdc++.h>
using namespace std;
void reversal(int ar[],int n)
{
    int i = 0, j = n - 1;

    while(i<j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;

        i++;
        j--;
    }
}
void traversal(int ar[],int n)
{
    for (int i = 0; i < n;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    int arr[size];
    cout << "\n enter the elements in an array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }

    cout << "\n the array before the reversal of an array is " << endl;
    traversal(arr, size);

    reversal(arr, size);
    cout << "\n the array after the reversal of an array is " << endl;
    traversal(arr, size);
}