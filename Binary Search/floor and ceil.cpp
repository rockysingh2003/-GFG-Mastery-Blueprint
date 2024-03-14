#include<bits/stdc++.h>
using namespace std;
int ceiling(int size,int ar[],int x)
{
    //ceiling function is the implementation of the lower bound .
    //smallest number in the array that is greater than or equal to x.
    int lower = 0;
    int higher = size - 1;
    int ans = INT_MAX;

    while(lower<=higher)
    {
        int middle;
        middle = lower + (higher - lower) / 2;
  
       if(ar[middle]>=x)
       {
           ans = min(middle, ans);
           higher = middle - 1;

       }

       else
           lower = middle + 1;
    }

    return ar[ans] ;
}

int flooring(int size, int ar[], int x)
{
    // this is slightly modification in the lower bound .
    // Earlier I was thinking that this is upper bound but it's not so.
    // In upper bound ,smallest number greater than the x;

    int lower = 0;
    int higher = size - 1;
    int ans = INT_MIN;
    while(lower<=higher)
    {
        int middle;
        middle = lower + (higher - lower) / 2;

        if(ar[middle]<=x)
        {
            ans = max(ans, middle);
            lower = middle + 1;
        }

        else
        {
            higher = middle - 1;
        }
    }

    return ar[ans] ;
}

int main()
{
    int size;
    cout << "\n enter the size of the array" << endl;
    cin >> size;

    int ar[size];
    cout << "\n enter the elements in the array" << endl;
    for (int i = 0; i < size;i++)
    {
        cin >> ar[i];
    }

    int x;
    cout << "\n enter the value of x" << endl;
    cin >> x;

    int ceil = ceiling(size, ar, x);
    int floor = flooring(size, ar, x);

    cout <<  floor << " " <<ceil ;


    return 0;
}