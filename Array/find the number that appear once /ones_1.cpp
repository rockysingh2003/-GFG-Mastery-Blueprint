#include <bits/stdc++.h>
using namespace std;
// using hash array
void countdown(vector<int> &v, int n)
{
    map<int, int> myMap;

    for (int i = 0; i < n;i++)
    {
        myMap[v[i]]++;
    }

    for(auto &it :myMap)
    {
        if(it.second==1)
        {
            cout << it.first << " ";
            break;
        }
    }
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