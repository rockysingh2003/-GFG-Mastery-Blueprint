// #include<bits/stdc++.h>
// using namespace std;
// int first_binary_search(int size,int ar[],int target)
// {
//     // int lower = 0;
//     // int higher = size - 1;

//     // int first;
//     // while(lower<=higher)
//     // {
//     //     int middle;
//     //     middle = lower + (higher - lower) / 2;
//     //     if(ar[middle]==target)
//     //     {
//     //         first = middle;
//     //         break;
//     //     }
//     // }

//     // return first;

//     int lower = 0;
//     int higher = size - 1;
//     int high = INT_MAX;

//     while (lower <= higher)
//     {
//         int middle;
//         middle = lower + (higher - lower) / 2;
//         if (ar[middle] > target)
//         {
//             high = min(high, middle);
//             lower = middle + 1;
//         }

//         else
//         {
//             higher = middle - 1;
//         }
//     }

//     return high;
// }

// int last_binary_search(int size, int ar[], int target)
// {
//     int lower = 0;
//     int higher = size - 1;
//     int low = INT_MIN;

//     while (lower <= higher)
//     {
//         int middle;
//         middle = lower + (higher - lower) / 2;
//         if (ar[middle] >= target)
//         {
//             low = max(low, middle);
//             higher = middle - 1;
//         }

//         else
//         {
//             lower = middle + 1;
//         }
//     }

//     return low;
// }

// int main()
// {
//     int sizeofarray;
//     cout << "\n enter the size of the array" << endl;
//     cin >> sizeofarray;

//     int ar[sizeofarray];
//     cout << "\n enter the element in the array" << endl;
//     for (int i = 0; i < sizeofarray; i++)
//     {
//         cin >> ar[i];
//     }

//     cout << "\n enter the target" << endl;
//     int target;
//     cin >> target;

//     int result = first_binary_search(sizeofarray, ar, target);

//     cout << result << " " << endl;

//    int  last_result=last_binary_search(sizeofarray,ar,target);

//     cout << last_result << " " << endl;
//     return 0;
// }

/*
#include <bits/stdc++.h>
using namespace std;
int low(vector<int> ar, int size, int x)
{
    int lower = 0;
    int higher = size - 1;
    long long int lowerbound = LLONG_MAX;
    while (lower <= higher)
    {
        long long int middle;

        middle = lower + (higher - lower) / 2;

        if (ar[middle] >= x)
        {
            lowerbound = min(middle, lowerbound);
            // lower = middle + 1;
            higher = middle - 1;
        }

        else
            // higher = middle - 1;
            lower = middle + 1;
    }

    return lowerbound == LLONG_MAX ? -1: lowerbound;
}


int up(vector<int> ar, int size, int x)
{
    int lower = 0;
    int higher = size - 1;
    long long int upperbound = 0;
    ;
    while (lower <= higher)
    {
        long long int middle;

        middle = lower + (higher - lower) / 2;

        if (ar[middle] > x)
        {
            upperbound = max(middle, upperbound);
            // lower = middle + 1;
            higher = middle - 1;
        }

        else
            // higher = middle - 1;
            lower = middle + 1;
    }

    return upperbound ;
}



int main()
{
    vector<int> ar = {2,4,6,8,8,8,11,13};
    int sizeOfarray = ar.size();
    int x = 8;
    int result = low(ar, sizeOfarray, x);
    if(result==sizeOfarray||ar[result]!=x)
        cout << "\n the first and last element is not found " << endl;
    else
    {
    cout << "\n the first element  is " << result;

    int lastResult = up(ar, sizeOfarray, x);
    cout << "\n the last element is " << lastResult-1;
    }
    return 0;
}

*/
#include <bits/stdc++.h>
using namespace std;

int first(vector<int> ar, int size, int target)
{
    int lower = 0;
    int higher = size - 1;
    int first = -1;

    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (ar[middle] == target)
        {
            first = middle;
            higher = middle - 1;
        }

        else
        {
            lower = middle + 1;
        }
    }

    return first;
}

int last(vector<int> ar, int size, int target)
{
    int lower = 0;
    int higher = size - 1;
    int last = -1;
    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (ar[middle] == target)
        {
            last = middle;
            lower = middle + 1;
        }
        else
        {
            higher = middle - 1;
        }
    }

    return last;
}

int main()
{
    vector<int> ar = {2, 4, 6, 8, 8, 8,8, 11, 13};
    int sizeOfarray = ar.size();
    int x = 8;
    int result = first(ar, sizeOfarray, x);
    if(result==-1)
        cout << "\n no possible occurences" << endl;
    else
    {
        // cout << "\n the first element  is " << result;

        int lastResult = last(ar, sizeOfarray, x);
        // cout << "\n the last element is " << lastResult;

        int total_number_of_occurrences = (lastResult - result + 1);
        cout << total_number_of_occurrences << endl;
    }


    return 0;
}