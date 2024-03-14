#include<bits/stdc++.h>
using namespace std;
int sum_Of_digits(int number)
{
    if(number ==0)
        return 0;

    return (number % 10) + (sum_Of_digits(number / 10));
}
int main()
{
    int number;
    cout << "\n enter the number of which sum is to be found " << endl;
    cin >> number;
    cout << "\n the sum of the digits are " << sum_Of_digits(number);
}