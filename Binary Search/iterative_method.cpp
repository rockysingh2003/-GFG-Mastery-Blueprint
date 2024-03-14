#include<bits/stdc++.h>
using namespace std;
int binary_search(int size,int ar[],int target)
{
    int lower = 0;
    int higher = size - 1;

    while(lower<=higher)
    {
        int middle;

        // important steps for the binary search are below;
        middle = (lower + higher) / 2; //<--step 1;
        if (ar[middle] == target)      //<--step 2;
            return middle;

        else if(ar[middle]<target)
            lower = middle + 1; //<--step 3;

        else if(ar[middle]>target)
            higher = middle - 1; //<--step 4;
    }

    return -1;
}


int main()
{
    int sizeofarray;
    cout << "\n enter the size of the array" << endl;
    cin >> sizeofarray;

    int ar[sizeofarray];
    cout << "\n enter the element in the array" << endl;
    for (int i = 0; i < sizeofarray;i++)
    {
        cin >> ar[i];
    }

    cout << "\n enter the target" << endl;
    int target;
    cin >> target;

    int result = binary_search(sizeofarray, ar, target);

    if(result==-1)
        cout << "\n the element is not present " << endl;
    else
    cout << "\n the element is present at the index" << result;

    return 0;
}