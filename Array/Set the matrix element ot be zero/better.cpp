
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

    int row[n] = {0}; // row array
    int col[m] = {0}; // col array

    // Traverse the matrix:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                // mark ith index of row wih 1:
                row[i] = 1;

                // mark jth index of col wih 1:
                col[j] = 1;
            }
        }
    }

    // Finally, mark all (i, j) as 0
    // if row[i] or col[j] is marked with 1.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
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
