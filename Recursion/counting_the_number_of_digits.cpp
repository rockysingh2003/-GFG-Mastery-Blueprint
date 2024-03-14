#include <bits/stdc++.h>
using namespace std;
int sum(int number)
{
    if (number == 0)
        return 0;
    else
       return (1+sum(number/10));   
}
int main()
{
    int number;
    cout << "\n enter the number " << endl;
    cin >> number;
    cout << "\n the total number of digits are " << sum(number);
    return 0;
}