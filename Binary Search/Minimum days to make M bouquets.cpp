#include <bits/stdc++.h>
using namespace std;
/*
m=No. Of Bouquets
k=adjacent flowers required.
*/

bool minimum(int ar[], int day, int m, int k)
{
    int count = 0;

    int no_Of_Bouquets = 0;
    for (int i = 1; i <= day; i++)
    {
        if (ar[i] <= day)
        {
            count++;
        }
        else
        {
            no_Of_Bouquets = no_Of_Bouquets + (count / k);
            count = 0;
        }
    }

    no_Of_Bouquets = no_Of_Bouquets + (count / k);

    if (no_Of_Bouquets >= m)
        return true;
    else
        return false;
}

int main()
{
    int ar[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = (sizeof(ar) / sizeof(ar[0]));
    int minimumDay = *min_element(ar, ar + n);

    int maximumDay = *max_element(ar, ar + n);

    int m, k;
    cout << "\n enter the value of m";
    cin >> m;
    cout << "\n enter the value of k";
    cin >> k;
    bool found = false;
    for (int i = minimumDay; i <= maximumDay; i++)
    {
        if (minimum(ar, i, m, k) == true)
        {
            cout << "\n the minimum day is " << i;
            found = true;
            break;
        }
       
    }

    if (!found) // --> if no valid minimum day is found, print an appropriate message
    {
        cout << "\nNo valid minimum day found." << endl;
    }
    return 0;
}