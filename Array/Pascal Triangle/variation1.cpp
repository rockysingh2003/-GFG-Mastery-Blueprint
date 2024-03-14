#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "\n enter the value of row" << endl;
    cin >> r;
    cout << "\n enter the value of column" << endl;
    cin >> c;
    vector<int> ar;

    ar.push_back(pow(11, r - 1));

    for (int i = 1; i <= c;i++)
    {
        if(i==c)
        cout << ar[i];
    }

        return 0;
}