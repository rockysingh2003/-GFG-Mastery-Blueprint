//n-th fibonacci number when n>=0
#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return n;

    return fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int number;
    cout << "\enter the number upto which series to be found" << endl;
    cin >> number;
    fibo(number);
    return 0;
}