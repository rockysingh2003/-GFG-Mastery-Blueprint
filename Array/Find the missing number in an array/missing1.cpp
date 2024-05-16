#include<bits/stdc++.h>
using namespace std;
void summation_method(vector<int> &v,int n)
{
    int s1 = (n * (n + 1)) / 2;

    int s2 = 0;
    for (int i = 0; i < n - 1;i++)
    {
        s2 += v[i];
    }

    cout << "\n the missing number is " << (s1 - s2);
}

int main()
{
    vector<int> v;

    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;
    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size - 1;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    summation_method(v, size);
}