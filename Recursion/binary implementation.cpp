#include<bits/stdc++.h>
using namespace std;
void binary(int n)
{
    if(n==0)
    {
        return;
    }

    binary(n / 2);
    cout << (n % 2) << " ";
}
int main()
{
    int n;
    cout << "\n which number you want to convert it " << endl;
    cin >> n;

    binary(n);
}
