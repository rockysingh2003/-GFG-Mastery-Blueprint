#include<bits/stdc++.h>
using namespace std;

/*
//below function is the naive that I also think.
int remove_the_duplicate_in_sorted_array(int ar[], int n)
{
    int temp[n];  //<---we have taken n size becoz the worst case possibility is that all elements would present in the temporary array.
    temp[0]=ar[0];
    int res=1;  //<--this showing that the size of the temp array is one and also presenting the index of next element .
    
    for(int i=1;i<n;i++)
    {
        if(temp[res-1]!=ar[i])
        {
            temp[res]=ar[i];
            res++;
        }
    }


    for(int i=0;i<res;i++)
    ar[i]=temp[i];

    return res;

} 
*/
int remove_the_duplicate_in_sorted_array(int ar[], int n)
{
    int res=1;

    for(int i=1;i<n;i++)
    {
        if(ar[i]!=ar[res-1])
        {
            ar[res]=ar[i];
            res++;
        }
    }
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
       int size= remove_the_duplicate_in_sorted_array(ar,n);
       cout<<"\n the size is "<<size<<endl;

       cout<<"array after the remove function has done its job."<<endl;
       for(int j=0;j<n;j++)
       cout<<ar[j]<<endl;
    return 0;
}