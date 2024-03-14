#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
        return 0;

    return n + sum(n - 1);
}
int main()
{
    int number;
    cout << "Enter a positive integer:" << endl;
    cin >> number;
    cout << "\n the value of sum is" << sum(number);
    return 0;
}