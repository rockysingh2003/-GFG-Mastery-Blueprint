#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "\n enter the size of array " << endl;
    cin >> size;
    int arr[size];
    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    int target;
    cout << "\n enter the target value " << endl;
    cin >> target;

    cout << "\n the total number of occurences is " << endl;
    for (int i = 0; i < size;i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
    }
    cout << count;
}