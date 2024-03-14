#include<bits/stdc++.h>
using namespace std;
void linear_search(int ar[],int findout,int n)
{
    int find =-1 ;
    int index = -1;
    for (int i = 0;i<n;i++)
    {
        if(ar[i]==findout)
            {
                index = i;
                find = 1;
            }
    }

    if(find==-1)
        cout << "\n the element you are searching is not present " << endl;
    else
      {
          cout << "\n the element found at the index" << index;
      }    
}

int main()
{
    int n;
    cout << "\n enter the size of the array" << endl;
    cin >> n;
    int ar[n],findout;
    cout << "\n enter the element in the array in the ascending manner" << endl;
    for (int i = 0; i < n;i++)
    {
        cin >> ar[i];
    }

    cout << "\n enter the element to be found or searched " << endl;
    cin >> findout;

    linear_search(ar, findout, n);

    return 0;
}