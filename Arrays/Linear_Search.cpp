#include<bits/stdc++.h>
using namespace std;
int linear_search ( int ar[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(ar[i]==x)
         return i;
    }

    return -1;
}
int main()
{
    
    int n;
    cout<<"\n enter the size of an array";
    cin>>n;
    int ar[n],x,return_value;
    cout<<"\n enter the elements in the array";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }


    cout<<"\n enter the element you want to search";
    cin>>x;

    return_value=linear_search(ar,n,x);

    if(return_value== -1)
    cout<<"\n search not successful";
    else 
    {
        cout<<"\n search is successful";
    }


    return 0;
}