#include<bits/stdc++.h>
using namespace std;
void removal(vector<int> &v)
{
    int n = v.size();
    int i = 0;

    while (i < n - 1)
    {
        if (v[i] == v[i + 1])
        {
            v.erase(v.begin() + i); // Erase the current element if it's equal to the next one
            --n;                    // Decrease the size of the vector
        }
        else
        {
            ++i; // Move to the next element if no removal is done
        }
    }
}

int main()
{
    vector<int> v;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    removal(v);

    // Printing the unique elements
    cout << "Unique elements in the vector: ";
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}