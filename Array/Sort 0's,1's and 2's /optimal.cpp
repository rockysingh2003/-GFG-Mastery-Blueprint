#include<bits/stdc++.h>
using namespace std;
void dutch(vector<int> &v)
{
    int low = 0;
    int middle = 0;
    int high = v.size() - 1;

    while(middle<=high)
    {
        if(v[middle]==0)
        {
            swap(v[low], v[middle]);
            low++;
            middle++;
        }

        else if (v[middle]==1)
        {
            middle++;
        }

        else if(v[middle]==2)
        {
            swap(v[middle], v[high]);
            high--;
        }
    }
}
int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of an array" << endl;
    cin >> size;

    cout << '\n enter the elements in your array' << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    dutch(v);
}