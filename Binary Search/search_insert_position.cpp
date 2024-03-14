#include <bits/stdc++.h>
using namespace std;
void searchInsertposition(int size, int ar[], int target)
{
    int lower = 0;
    int higher = size - 1;
    int indicator = 0;
    int middle;
   
    
    // searching for the target .
    // If found ,returning its index.
    while (lower <= higher)
    {
        

        // important steps for the binary search are below;
        middle = (lower + higher) / 2; //<--step 1;
        if (ar[middle] == target)      //<--step 2;
            {
                indicator++;
                cout<<"\n the target is found at the index"<<middle;
            }

        else if (ar[middle] < target)
            lower = middle + 1; //<--step 3;

        else if (ar[middle] > target)
            higher = middle - 1; //<--step 4;
    }


    //If not found ,then
    // inserting it plus maintaining the sorted order.
    while (lower <= higher)
    {
        

        // important steps for the binary search are below;
        middle = (lower + higher) / 2; //<--step 1;
        

        if (ar[middle] < target)
            lower = middle + 1; //<--step 3;

        else if (ar[middle] > target)
            higher = middle - 1; //<--step 4;
    }

    // If not found, then inserting it while maintaining the sorted order.
   

    // Shift elements to the right to make space for insertion
    for (int i = size - 1; i >= middle; i--)
    {
        ar[i + 1] = ar[i];
    }

    ar[middle] = target; // Insert the target at the correct position
}

int main()
{
    int sizeofarray;
    cout << "\n enter the size of the array" << endl;
    cin >> sizeofarray;

    int ar[sizeofarray];
    cout << "\n enter the element in the array" << endl;
    for (int i = 0; i < sizeofarray; i++)
    {
        cin >> ar[i];
    }

    cout << "\n enter the target" << endl;
    int target;
    cin >> target;

    searchInsertposition(sizeofarray, ar, target);

    for (int i = 0; i <  sizeofarray+1;i++)
    {
        cout << ar[i] << " " << endl;
    }

        return 0;
}