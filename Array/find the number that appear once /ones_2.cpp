#include <bits/stdc++.h>
using namespace std;
// using hash array
void countdown(vector<int> &v, int n)
{
    int xor1 = 0;

    for (int i = 0; i < n;i++)
    {
        xor1 = xor1 ^ v[i];
    }

    cout << "\n the element is " << xor1;
}

int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of your vector" << endl;
    cin >> size;

    cout << "\n enter the elements in you vector" << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    countdown(v, size);
}