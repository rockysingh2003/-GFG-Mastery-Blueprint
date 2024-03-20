#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  number;
    cout << "\n enter the number " << endl;
    cin >> number;

    // int ans = 1;
    // for (int i = 0; i <= number;i++)
    // {
    //     if(i*i<=number)
    //     {
    //         ans = i;
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    // cout << "\n the square root of a number is " << ans;


    //above code is naive appraoch.
    //If problem is being looked at then question is largest integer <=given number

    long long  lower = 1;
    long long  higher = number;
    

    while(lower<=higher)
    {
        long long  middle = lower + (higher - lower) / 2;

        if(middle*middle<=number)
        {
            
            lower = middle + 1;
        }
        else
        {
            higher = middle - 1;
        }
    }

    cout << "\n"<<higher<< endl;
    return 0;
}