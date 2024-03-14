#include <bits/stdc++.h>
using namespace std;
int binary_search(int ar[], int lower, int higher, int target)
{
    int middle;
    if (lower > higher)
        return -1;

    middle = (lower + higher) / 2;

    if (ar[middle] == target)
        return middle;

    else if (target > ar[middle])
        return binary_search(ar, middle + 1, higher, target);

    else if (target < ar[middle])
         return binary_search(ar, lower, middle -1, target);
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

    int lower = 0;
    int higher = sizeofarray - 1;
    int result = binary_search(ar, lower, higher, target);

    if (result == -1)
        cout << "\n the element is not present " << endl;
    else
        cout << "\n the element is present at the index" << result;

    return 0;
}