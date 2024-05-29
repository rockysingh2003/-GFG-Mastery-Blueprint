//to be done tomorrow...
#include <bits/stdc++.h>
using namespace std;

bool recursive_approach(int ar[], int target, int lower, int higher)
{
    if (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;

        if (ar[middle] == target)
        {
            cout << "\nThe element is present at the index " << middle << endl;
            return true;
        }

        if (ar[middle] < target)
        {
            return recursive_approach(ar, target, middle + 1, higher);
        }
        else
        {
            return recursive_approach(ar, target, lower, middle - 1);
        }
    }

    return false;
}

int main()
{
    int size;
    cout << "\nEnter the size of the array: " << endl;
    cin >> size;

    int ar[size];
    cout << "\nEnter the elements in the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    int target;
    cout << "\nEnter the target value: ";
    cin >> target;

    int lower = 0, higher = size - 1;
    bool found = recursive_approach(ar, target, lower, higher);

    if (!found)
    {
        cout << "\nElement not found. Sorry Darling!" << endl;
    }

    return 0;
}
