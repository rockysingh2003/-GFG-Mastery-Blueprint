#include<bits/stdc++.h>
using namespace std;
void largest_element(int ar[] , int n)
{
    int count =0,index;

    for(int i=0;i<n;i++)
    {
        if(count<=ar[i])
        {
            count=ar[i];
            index=i;
        }
    }

    cout<<"\n the largest element is "<<count<<" present at the index "<<index;
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

    largest_element(ar,n);
    return 0;
}