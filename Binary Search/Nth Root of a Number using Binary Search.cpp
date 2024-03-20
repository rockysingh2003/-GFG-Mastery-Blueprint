/*
#include<bits/stdc++.h>
using namespace std;
int root(int n,int m)
{
    int lower = 1;
    int higher = m;

    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;

        if (pow(middle, n) == m)
        {
            return  middle ;
        }

        else if (pow(middle, n) < m)
        {
            lower = middle + 1;
        }
        else
        {
            higher = middle - 1;
        }
    }

    return -1;
}
int main()
{
    int n = 3, m = 27;

    int number = root(n, m);
    cout << "\n the root is " << number;
    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;
int checking(long long int middle, int n, int m)
{
    long long int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * middle;

        if (ans > m)
            return 2;
    }

    if (ans == m)
        return 1;

    if (ans < m)
        return 0;
}

int root(long long int n, long long int m)
{
    int lower = 1;
    int higher = m;

    // below is binary search which helps in reducing the space for better efficency search.
    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;

        int middle_part = checking(middle, n, m);
        if (middle_part == 1)
        {
            return middle;
        }
        else if (middle_part == 2)
        {
            higher = middle - 1;
        }
        else if (middle_part == 1)
        {
            lower = middle + 1;
        }
    }

    return -1;
}
int main()
{
    int n, m;
    cout << "\n enter the value of n" << endl;
    cin >> n;
    cout << "\n enter the value of m" << endl;
    cin >> m;
    int result = root(n, m);
    cout << "\n the result is " << result;
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

// return 1, if == m:
// return 0, if < m:
// return 2, if > m:
int func(int mid, int n, int m)
{
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * mid;
        if (ans > m)
            return 2;
    }
    if (ans == m)
        return 1;
    return 0;
}

int NthRoot(int n, int m)
{
    // Use Binary search on the answer space:
    int low = 1, high = m;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int midN = func(mid, n, m);
        if (midN == 1)
        {
            return mid;
        }
        else if (midN == 0)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int n = 3, m = 27;
    int ans = NthRoot(n, m);
    cout << "The answer is: " << ans << "\n";
    return 0;
}

*/