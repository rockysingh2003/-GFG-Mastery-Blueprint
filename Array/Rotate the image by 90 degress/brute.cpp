#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n)); // Correctly initialize the 2D vector

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ans[j][n - 1 - i] = matrix[i][j]; // Properly rotate the matrix by 90 degrees clockwise
        }
    }

    return ans;
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> rotated = rotate(arr);

    cout << "Rotated Image" << endl;
    for (int i = 0; i < rotated.size(); i++)
    {
        for (int j = 0; j < rotated[0].size(); j++)
        {
            cout << rotated[i][j] << " ";
        }
        cout << endl; // Correctly print new line
    }
    return 0;
}
