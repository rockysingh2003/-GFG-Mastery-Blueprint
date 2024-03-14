#include<bits/stdc++.h>
using namespace std;
void simple_printing_one(int n)
{
    if (n == 0)
        return;

   
    cout << n << endl;
    simple_printing_one(n - 1);
}

int main()
{
    int n;
    cout << "\n enter the number" << endl;
    cin >> n;
    simple_printing_one(n);
    return 0;
}