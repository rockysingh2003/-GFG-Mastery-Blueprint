#include <iostream>
#include <vector>
#include <set>
#include<bits/stdc++.h>
using namespace std;

void removal(vector<int> &v)
{
    set<int> uniqueSet;

    // Inserting elements into the set
    for (int i : v)
    {
        uniqueSet.insert(i);
    }

    // Clearing the vector
    v.clear();

    // Copying unique elements back to the vector
    for (int j : uniqueSet)
    {
        v.push_back(j);
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

    // Remove duplicates
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
