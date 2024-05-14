#include <bits/stdc++.h>
using namespace std;
void deletion(int ar[], int index, int size)
{
    int i = index;
    for (; i <= size - 2; i++)
    {
        ar[i] = ar[i + 1];
    }

    ar[i] = 0;
}

void linear_search(int ar[], int capacity, int deleteItem)
{
    int i = 0;
    int setter = 0;
    for (; i < capacity; i++)
    {
        if (ar[i] == deleteItem)
        {
            deletion(ar, i, capacity);
            return;
        }
    }

    if (setter == 0)
    {
        cout << "\n since element is not found ,deletion can't be possible hence the array remain unaffected " << endl;
        return;
    }
}

int main()
{
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the elements in an array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }

    cout << "\n here is the list of elements you have entered tell me which element you want to delete" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    cout << "\n tell me which element you want to delete now !" << endl;
    int det;
    cin >> det;

    cout << "\n the array before the traversal is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    linear_search(ar, size, det);

    cout << "\n the arrray after the deletion is " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}