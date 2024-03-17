// #include <bits/stdc++.h>
// using namespace std;
// int pivot(vector<int> arr,int size)
// {
   
//    int lower=0;
//    int higher = size - 1;

  

//    while(lower<=higher)
//    {
//        int middle;
//        middle = lower + (higher - lower) / 2;

//        if(arr[middle]>=arr[0])
//        {
//            lower = middle + 1;
//        }
//        else
//        {
//            higher = middle;
//        }
//    }

//    return lower;
// }
// int search(vector<int> vr, int start, int end, int target)
// {

//     int lower = start;
//     int higher = end - 1;;

   
//     while(lower<=higher)
//     {
//         int middle = lower + (higher - lower) / 2;
//         if(vr[middle]==target)
//             return middle;

//         else if(vr[middle]>target)
//         {
//             lower = middle - 1;
//         }    

//         else{
//             higher = middle - 1;
//         }
//     }

//     return -1;
// }


// int main()
// {
//     vector<int> ar = {4, 5, 6, 0, 1, 2, 3};
//     int sizeOfarray = ar.size();
//     int target=0;
    

    
//     int pivotNumber = pivot(ar, sizeOfarray);
//     if(ar[pivotNumber]<=target && target<=ar[sizeOfarray-1])
//     {
//         int result = search(ar, pivotNumber, sizeOfarray - 1, target);
//         cout <<result;
//     }
//     else 
//     {
//         int result = search(ar, 0, pivotNumber - 1, target);
//         cout << result;;
//     }

    

//     return 0;
// }


/*

#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> arr, int size)
{

    int lower = 0;
    int higher = size - 1;

    while (lower <= higher)
    {
        int middle;
        middle = lower + (higher - lower) / 2;

        if (arr[middle] >= arr[0]) // <--- This condition should be arr[middle] > arr[0] to find the pivot correctly
        {
            lower = middle + 1;
        }
        else
        {
            higher = middle;
        }
    }

    return lower;
}

int search(vector<int> vr, int start, int end, int target)
{

    int lower = start;
    int higher = end; // <--- Remove the "-1" here

    while (lower <= higher)
    {
        int middle = lower + (higher - lower) / 2;
        if (vr[middle] == target)
            return middle;

        else if (vr[middle] > target)
        {
            higher = middle - 1; // <--- Adjust this to higher = middle (no need to subtract 1)
        }

        else
        {
            lower = middle + 1; // <--- Adjust this to lower = middle + 1 (you're moving to the next element)
        }
    }

    return -1;
}

int main()
{
    vector<int> ar = {4, 5, 6, 0, 1, 2, 3};
    int sizeOfarray = ar.size();
    int target = 0;

    int pivotNumber = pivot(ar, sizeOfarray);
    if (ar[pivotNumber] <= target && target <= ar[sizeOfarray - 1])
    {
        int result = search(ar, pivotNumber, sizeOfarray - 1, target);
        cout << result; // <--- Here, you're missing a space before the semicolon
    }
    else
    {
        int result = search(ar, 0, pivotNumber - 1, target);
        cout << result; // <--- Here as well, missing a space before the semicolon
    }

    return 0;
}


*/
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &arr, int n, int target)
{
    int lower = 0;
    int higher = n - 1;

    // starting the binary search part;
    while(lower<=higher)
    {
        int middle = lower + (higher - lower) / 2;

        // checking whether we found the target at the middle or not ;
        if(arr[middle]==target)
            return middle;

        if (arr[lower] <= arr[middle]) //<---now since one of the arrray is always sorted thus we have to find whether left is sorted or right part is sorted.
        {
          //this is left part sorted .It means right is unsorted.
          if(arr[lower]<=target&&target<=arr[middle])  //<---this means we are searching in the left of left part.
              higher = middle - 1;

           else
               lower = middle + 1;
        } 

        else
        {
            if (arr[middle] <= target && target <= arr[higher]) //<---this means we are searching in the left of left part.
                lower = middle + 1;

            else
                higher= middle - 1;
        }   


    }

    return -1;
}

int main()
{
    vector<int> arr = {7, 8, 9, 1, 2, 3, 4, 5, 6};
    int n = 9, k = 1;
    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present.\n";
    else
        cout << "The index is: " << ans << "\n";
    return 0;
}
