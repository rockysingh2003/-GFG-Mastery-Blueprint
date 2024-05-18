#include <bits/stdc++.h>
using namespace std;
void brute(vector<int> &v, int size, int target)
{
    // x+y=target; and main funny fact lies that this y is present in the array provided.
    // so we can find the y in the hashmap.
    map<int, int> mp;

    for (int i = 0; i < size;i++)
    {
        int remaining = target-v[i];

        if(mp.find(remaining)!=mp.end())
        {
            cout << "\n the index pair is " << mp[remaining] << " " << i << endl; //this will provide the indices.
            break;
        }

        mp[v[i]] = i;
    }
}
int main()
{
    vector<int> v;

    int size;
    cout << "\nenter the size of an array" << endl;
    cin >> size;

    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    int target;
    cout << "\n enter the value of target" << endl;
    cin >> target;

    brute(v, size, target);
}