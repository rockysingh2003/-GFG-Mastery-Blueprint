#include <bits/stdc++.h>
using namespace std;
void xor_ing_method(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++)
    {
        xor2 = xor2 ^ a[i];    // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; // XOR up to [1...N]

    cout<< (xor1 ^ xor2); // the missing number
}

int main()
{
    vector<int> v;

    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;
    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size - 1; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    xor_ing_method(v, size);
}