#include<bits/stdc++.h>
using namespace std;
//below is a non-tail recursive function
/*
int  factorial(int n)
{
   if(n==1||n==0)
       return 1;

   return n * factorial(n - 1);
}*/

// below is a tail recusive function
int factorial(int n,int k)
{
    if(n==1||n==0)
        return k;

    return factorial(n - 1, n * k);
}

int main()
{
    int number,k=1;
    cout << "\n enter the number of which the factorial to be found" << endl;
    cin >> number;
    
    cout<<factorial(number,k); 
    return 0;
}