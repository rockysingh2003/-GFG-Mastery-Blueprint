// #include <bits/stdc++.h>
// using namespace std;
// /*
// m=No. Of Bouquets
// k=adjacent flowers required.
// */

// bool minimum(int ar[], int day, int m, int k)
// {
//     int count = 0;

//     int no_Of_Bouquets = 0;
//     for (int i = 1; i <= day; i++)
//     {
//         if (ar[i] <= day)
//         {
//             count++;
//         }
//         else
//         {
//             no_Of_Bouquets = no_Of_Bouquets + (count / k);
//             count = 0;
//         }
//     }

//     no_Of_Bouquets = no_Of_Bouquets + (count / k);

//     if (no_Of_Bouquets >= m)
//         return true;
//     else
//         return false;
// }

// int bs(int ar[],int m,int k)
// {
//     int n = (sizeof(ar) / sizeof(ar[0]));
//     int minimumDay = *min_element(ar, ar + n);

//     int maximumDay = *max_element(ar, ar + n);
//     int lower = minimumDay;
//     int higher = maximumDay;

//     while(lower<=higher)
//     {
//         int middle = lower + (higher - lower) / 2;

//         if(minimum(ar,middle,m,k)==true)
//         {
//             higher = middle - 1;
//         }
//         else
//         {
//             lower = middle + 1;
//         }
//     }

//     return lower;
// }

// int main()
// {
//     int ar[] = {7, 7, 7, 7, 13, 11, 12, 7};
   
    

//     int m, k;
//     cout << "\n enter the value of m";
//     cin >> m;
//     cout << "\n enter the value of k";
//     cin >> k;
//     // bool found = false;
//     // for (int i = minimumDay; i <= maximumDay; i++)
//     // {
//     //     if (minimum(ar, i, m, k) == true)
//     //     {
//     //         cout << "\n the minimum day is " << i;
//     //         found = true;
//     //         break;
//     //     }
       
//     // }

//     // if (!found) // --> if no valid minimum day is found, print an appropriate message
//     // {
//     //     cout << "\nNo valid minimum day found." << endl;
//     // }


//     int result = bs(ar, m, k);
//     cout << "\n the result are " << endl;
//     cout << result;
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

bool minimum(int ar[], int day, int m, int k)
{
    int count = 0;
    int no_Of_Bouquets = 0;
    for (int i = 0; ar[i]; i++)
    {
        if (ar[i] <= day)
        {
            count++;
        }
        else
        {
            no_Of_Bouquets += (count / k);
            count = 0;
        }
    }
    no_Of_Bouquets += (count / k);
    return no_Of_Bouquets >= m;
}

int bs(int ar[], int n, int m, int k)
{
    int minimumDay = *min_element(ar, ar + n);
    int maximumDay = *max_element(ar, ar + n);
    int lower = minimumDay;
    int higher = maximumDay;

    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (minimum(ar, middle, m, k))
        {
            higher = middle - 1;
        }
        else
        {
            lower = middle + 1;
        }
    }
    return lower;
}

int main()
{
    int ar[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = sizeof(ar) / sizeof(ar[0]);
    int m, k;
    cout << "Enter the value of m: ";
    cin >> m;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = bs(ar, n, m, k);
    cout << "The minimum number of days required: " << result << endl;
    return 0;
}
