#include <bits/stdc++.h>
using namespace std;

void insertion_at_the_specific(int capacity, int ar[], int size, int position, int x)
{
    if (capacity == size)
    {
        cout << "\n No insertion is possible." << endl;
        return;
    }

    int i = size - 1;
    for (; i >= position - 1; i--)
    {
        ar[i + 1] = ar[i];
    }

    ar[i + 1] = x;
}

int main()
{
    int capacity;
    cout << "\n enter the size of an array" << endl;
    cin >> capacity;

    int arr[capacity];
    cout << "\n enter the elements of an array" << endl;
    for (int i = 0; i < capacity; i++)
    {
        cin >> arr[i];
    }

    // calculating the how many elements are present ..
    int size = 0;
    for (int i = 0; i < capacity; i++)
    {
        if (arr[i] == 0)
        {
            break;
        }

        size++;
    }

    cout << "\n the size of the element is " << size << endl;
    int position;
    cout << "\n enter at which position you want to insert the element " << endl;
    cin >> position;

    int x;
    cout << "\n enter which element you wan to insert at that position which you have entered" << endl;
    cin >> x;

    cout << "\n element before the traversing " << endl;
    for (int i = 0; i < capacity; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    insertion_at_the_specific(capacity, arr, size, position, x);

    // traversing through the array....

    cout << "\n element after the traversing " << endl;
    for (int i = 0; i < capacity; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}