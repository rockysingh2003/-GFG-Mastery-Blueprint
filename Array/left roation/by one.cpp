#include<bits/stdc++.h>
using namespace std;
void rotation(int ar[],int n)
{
    int temp = ar[0];

    for (int i = 1; i < n;i++)
    {
        ar[i-1] = ar[i];
    }

    ar[n - 1] = temp;

    cout << "\n the array after the rotation by one is " << endl;
    for (int i = 0; i < n;i++)
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
    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[i];
    }

    rotation(ar, size);
}