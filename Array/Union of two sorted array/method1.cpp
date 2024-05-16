#include <bits/stdc++.h>
using namespace std;
void findUnion(vector<int> &v1, vector<int> &v2, int n, int m)
{
    if (n == 0 and m != 0)
    {
        cout << "\n our element will be v2" << endl;
        return;
    }
    else if (m == 0 and n != 0)
    {
        cout << "\n our element will be v1" << endl;
        return;
    }

    set<int> uniqueSet;
    vector<int> br;

    for (int i = 0; i < n; i++)
    {
        uniqueSet.insert(v1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        uniqueSet.insert(v2[i]);
    }

    for (auto &i : uniqueSet)
    {
        br.push_back(i);
    }

    // traversing the array ..
    for (auto &j : br)
    {
        cout << j << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;

    int size1;
    cout << "\n enter the size1 of an array" << endl;
    cin >> size1;
    cout << "\n enter the elements in your array1" << endl;
    for (int i = 0; i < size1; i++)
    {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    vector<int> v2;

    int size2;
    cout << "\n enter the size2 of an array" << endl;
    cin >> size2;
    cout << "\n enter the elements in your array2" << endl;
    for (int i = 0; i < size2; i++)
    {
        int element;
        cin >> element;
        v2.push_back(element);
    }

    findUnion(v1, v2, size1, size2);
}