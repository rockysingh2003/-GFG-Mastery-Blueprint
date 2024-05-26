#include<bits/stdc++.h>
using namespace std;
void rotation(vector<vector<int>> &v)
{
    /*
    We will perform two steps in this method ...
    1.Transpose.
    2.Reversing the row .

     */

    //transposing the array..
    int n = v.size();

    for (int i = 0; i < n-1 ;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(v[i].begin(), v[i].end());
    }

    cout << "\n the array is after the rotation is " << endl;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cout << v[i][j] << " ";
      }
      cout << endl;
    }
}

int main()
{
    int size;
    cout << "\n enter the size of the 2-d matrix which in this is equal for either variable " << endl;
    cin >> size;
    vector<vector<int>>v (size, vector<int> (size,0));//this is how we create 2-d array in the matrix..

    cout << "\n enter the elements in the vector" << endl;
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            cin >> v[i][j];
        }
    }

    rotation(v);
}