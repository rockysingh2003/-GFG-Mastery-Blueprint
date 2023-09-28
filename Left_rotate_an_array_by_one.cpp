#include<bits/stdc++.h>
using namespace std;
void left_rotate_an_array_by_one(int ar[],int n)
{
    int temp=ar[0];
    int i=1;
    for(;i<n;i++)
    {
        ar[i-1]=ar[i];
    }

    ar[n-1]=temp;
}


int main()
{
     int n;
       cout<<"\n enter the size of an array";
       cin>>n;
       int ar[n];
       cout<<"\n enter the elements in the array";
       for(int i=0;i<n;i++)
       {
        cin>>ar[i];
       }


       cout<<"array before the remove function starting."<<endl;
       for(int i=0;i<n;i++)
       cout<<ar[i]<<endl;

       cout<<"\nafter the rotation of the array"<<endl;
       left_rotate_an_array_by_one(ar,n);
       for(int i=0;i<n;i++)
       cout<<ar[i]<<endl;

    return 0;
}