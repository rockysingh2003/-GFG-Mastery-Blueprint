#include <bits/stdc++.h>
using namespace std;
void largest(int ar[], int size)
{
    int first_largest= 0;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (ar[i] > first_largest)
        {
            first_largest = ar[i];
            index = i;
        }
    }

    // return
    cout << "\n the largest element present is " << ar[index] << " at the index " << index << " " << endl;


    //finding the second largest element in the array....

    int second_largest = -1;
    int second_index = 0;

    for (int i = 0; i < size;i++)
    {
        if (ar[i] > second_largest and ar[i] != first_largest)
        {
            second_largest = ar[i];
            second_index = i;
        }
    }

    cout << "\n the second largest element present is " << ar[second_index] << " at the index is " << second_index << " " << endl;
}

int main()
{
    int size;
    cout << "\n enter the size of an element" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    largest(ar, size);
}