#include<bits/stdc++.h>
using namespace std;
void simple_printing(int n)
{
  if(n==0)
      return;

  simple_printing(n - 1);
  cout << n << endl;
}

int main()
{
    int n;
    cout << "\n enter the number" << endl;
    cin >> n;
    simple_printing(n);
    return 0;
}