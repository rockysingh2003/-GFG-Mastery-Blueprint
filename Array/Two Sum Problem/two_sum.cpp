#include<bits/stdc++.h>
using namespace std;
void brute(vector<int> &v,int size,int target)
{
    int sum = 0;
    int flag = 0;
    for (int i = 0; i < size;i++)
    {
        for (int j = i + 1; j < size;j++)
        {
            sum = v[i] + v[j];

            if(sum==target)
            {
                flag = 1;
                cout << "\n the pair is " << v[i] << " " << v[j] << endl;
                break;
            }
        }
    }

    if(flag==0)
    {
        cout << "\n there is no pair exists in this vector" << endl;
    }
}
int main()
{
    vector<int> v;

    int size;
    cout << "\nenter the size of an array" << endl;
    cin >> size;

    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
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