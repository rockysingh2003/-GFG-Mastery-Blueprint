#include <iostream>
#include <vector>
using namespace std;

void findUnion(vector<int> &v1, vector<int> &v2, int n, int m)
{
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (v1[i] < v2[j])
        {
            if (temp.empty() || v1[i] != temp.back())
                temp.push_back(v1[i]);
            i++;
        }
        else if (v2[j] < v1[i])
        {
            if (temp.empty() || v2[j] != temp.back())
                temp.push_back(v2[j]);
            j++;
        }
        else
        {
            if (temp.empty() || v1[i] != temp.back())
                temp.push_back(v1[i]);
            i++;
            j++;
        }
    }
    // Add remaining elements of v1, if any
    while (i < n)
    {
        if (temp.empty() || v1[i] != temp.back())
            temp.push_back(v1[i]);
        i++;
    }
    // Add remaining elements of v2, if any
    while (j < m)
    {
        if (temp.empty() || v2[j] != temp.back())
            temp.push_back(v2[j]);
        j++;
    }

    // Print the union elements
    cout << "Union of arrays: ";
    for (int num : temp)
        cout << num << " ";
    cout << endl;
}

int main()
{
    vector<int> v1, v2;

    int size1, size2;
    cout << "Enter the size of array 1: ";
    cin >> size1;
    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < size1; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    cout << "Enter the size of array 2: ";
    cin >> size2;
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < size2; i++)
    {
        int element;
        cin >> element;
        v2.push_back(element);
    }

    findUnion(v1, v2, size1, size2);
    return 0;
}
