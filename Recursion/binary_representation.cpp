#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
  if(n==0)
      return 1;
  else
      binary(n / 2);
  cout << (n % 2);
}
int main()
{
    int n;
    cout << "\n enter the number of which binary representation to be found" << endl;
    cin >> n;
    binary(n);
    return 0;
}