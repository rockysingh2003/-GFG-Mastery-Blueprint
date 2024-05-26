
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {

//     int col[m] = {0};
//     int row[n] = {0};

//     for (int i = 0; i < n;i++)
//     {
//         for (int j = 0; j < m;j++)
//         {
//             if(matrix[i][j]==0)
//             {
//                 row[i] = 1;
//                 col[j] = 1;
//             }
//         }
//     }  //this will mark the mark matrix...

//     for (int i = 0; i < n;i++)
//     {
//         for (int j = 0; j < m;j++)
//         {
//             if(row[i] or col[j])
//             {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     //finally returning the matrix....
//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{

    // int row[n] = {0}; // row array -----matrix[n][0]
    // int col[m] = {0}; // col array------matrix[0][m]

    //step 1: this is the marking in the hasharray that we have created ....
    int col0 = 1;
    for (int i = 0; i < n;i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (matrix[i][j] == 0)
           {
               // marking the i-th row;
               matrix[i][0] = 0;
               // marking the j-th column;
               if(j!=0)
               {
                   matrix[0][j] = 0;
               }
               else
               {
                   col0 = 0;
               }
           }
        }
    }

    //step 2: we are marking the zeroes in the arrray....
    for (int i = 1; i < n;i++)
    {
        for (int j = 1; j < m;j++)
        {
            if(matrix[i][j]!=0)
            {
                if(matrix[i][0]==0 or matrix[0][j]==0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }


    if(matrix[0][0]==0)
    {
        for (int j = 0; j < m;j++)
        {
            matrix[0][j] = 0;
        }
    }

    else if( col0==0)
    {
        for (int i = 0; i < n;i++)
        {
            matrix[i][0] = 0;
        }
    }
        return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: n";
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << "n";
    }
    return 0;
}
