#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> ar;
    int n;
    cout << "\n enter the number of row " << endl;
    cin >> n;
  
    //printing the pascal triangle without using the formula.
    for (int i = 0; i< n;i++)
    {
        cout << pow(11, i) << " " << endl;
    }


        return 0;
}