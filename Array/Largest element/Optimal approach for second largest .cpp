#include <bits/stdc++.h>
using namespace std;
void largest(int ar[], int size)
{
    int largest = ar[0];
    int slargest = INT_MIN; //This is i'm doing becoz i am assuming may there be negative elements present .....

    for (int i = 1; i < size;i++)
    {
        if(ar[i]>largest)
        {
            slargest = largest;
            largest = ar[i];
        }

        else if( ar[i]<largest and ar[i]>slargest)
        {
            slargest = ar[i];
        }
    }

    cout << slargest << endl;
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