#include<bits/stdc++.h>
using namespace std;
void buyandsell(vector<int> &v)
{
    int minimum = v[0];
    int maxiProfit = 0;

    int n = v.size();
    for (int i = 1; i < n;i++)
    {
        minimum = min(minimum, v[i]); //at this we buy the lowest  element ...
        maxiProfit = max(maxiProfit, v[i] - minimum); //... and then we sell it
    }

    cout << "\n the maxiprofit is " << maxiProfit;
}
int main()
{
    vector<int> v;
    int size;
    cout << "\n enter the size of your array" << endl;
    cin >> size;

    cout << "\n enter the elements in your array" << endl;
    for (int i = 0; i < size;i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }

    buyandsell(v);
}